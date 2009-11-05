#ifndef ANALYZE_H
#define ANALYZE_H

#include <QtCore>
#include "network.h"

class Player;

/* Commands to dialog with the server */
namespace NetworkServ
{
    enum Command
    {
	WhatAreYou = 0,
	WhoAreYou,
	Login,
	Logout,
	SendMessage,
	RecvMessage,
	PlayersList
    };

    enum ProtocolError
    {
	UnknowCommand = 0
    };
}

class Analyzer : public QObject
{
    Q_OBJECT
public:
    Analyzer(Player *p, QTcpSocket *sock);

    /* functions called by the client */
    void sendMessage(const QString &message);
    bool isConnected() const;

signals:
    /* to send to the network */
    void sendCommand(const QByteArray &command);
    /* to send to the client */
    void connectionError(int errorNum, const QString &errorDesc);
    void protocolError(int errorNum, const QString &errorDesc);

public slots:
    /* slots called by the network */
    void error();
    void commandReceived (const QByteArray &command);

private:
    Network &socket();

    Network mysocket;
    Player *myplayer;
};

#endif // ANALYZE_H
