#ifndef PROXYDATACONTAINER_H
#define PROXYDATACONTAINER_H

#include "battledataaccessor.h"
#include "auxpokedataproxy.h"

struct BattleConfiguration;

class ProxyDataContainer : public QObject {
    Q_OBJECT
public:
    typedef TeamProxy teamType;
    typedef FieldProxy fieldType;

    ProxyDataContainer(const BattleConfiguration *conf=NULL);
    ~ProxyDataContainer();

    Q_INVOKABLE TeamProxy *team(int player) {
        return teams[player];
    }

    const TeamProxy *team(int player) const {
        return teams[player];
    }

    Q_INVOKABLE quint16 avatar(int player) {
        return conf->avatar[player];
    }

    Q_PROPERTY (FieldProxy *field READ field CONSTANT);

    AuxPokeDataProxy &fieldPoke(int spot) {
        return *auxdata.poke(spot);
    }

    FieldProxy *field() {
        return &auxdata;
    }

    void reloadTeam(int player);

private:
    FieldProxy auxdata;

    TeamProxy* teams[2];
    const BattleConfiguration *conf;

public:

    enum Moves {
        NoMove,
        Pound,
        KarateChop,
        DoubleSlap,
        CometPunch,
        MegaPunch,
        PayDay,
        FirePunch,
        IcePunch,
        ThunderPunch,
        Scratch,
        ViceGrip,
        Guillotine,
        RazorWind,
        SwordsDance,
        Cut,
        Gust,
        WingAttack,
        Whirlwind,
        Fly,
        Bind,
        Slam,
        VineWhip,
        Stomp,
        DoubleKick,
        MegaKick,
        JumpKick,
        RollingKick,
        Sand_Attack,
        Headbutt,
        HornAttack,
        FuryAttack,
        HornDrill,
        Tackle,
        BodySlam,
        Wrap,
        TakeDown,
        Thrash,
        Double_Edge,
        TailWhip,
        PoisonSting,
        Twineedle,
        PinMissile,
        Leer,
        Bite,
        Growl,
        Roar,
        Sing,
        Supersonic,
        SonicBoom,
        Disable,
        Acid,
        Ember,
        Flamethrower,
        Mist,
        WaterGun,
        HydroPump,
        Surf,
        IceBeam,
        Blizzard,
        Psybeam,
        BubbleBeam,
        AuroraBeam,
        HyperBeam,
        Peck,
        DrillPeck,
        Submission,
        LowKick,
        Counter,
        SeismicToss,
        Strength,
        Absorb,
        MegaDrain,
        LeechSeed,
        Growth,
        RazorLeaf,
        SolarBeam,
        PoisonPowder,
        StunSpore,
        SleepPowder,
        PetalDance,
        StringShot,
        DragonRage,
        FireSpin,
        ThunderShock,
        Thunderbolt,
        ThunderWave,
        Thunder,
        RockThrow,
        Earthquake,
        Fissure,
        Dig,
        Toxic,
        Confusion,
        Psychic,
        Hypnosis,
        Meditate,
        Agility,
        QuickAttack,
        Rage,
        Teleport,
        NightShade,
        Mimic,
        Screech,
        DoubleTeam,
        Recover,
        Harden,
        Minimize,
        SmokeScreen,
        ConfuseRay,
        Withdraw,
        DefenseCurl,
        Barrier,
        LightScreen,
        Haze,
        Reflect,
        FocusEnergy,
        Bide,
        Metronome,
        MirrorMove,
        Selfdestruct,
        EggBomb,
        Lick,
        Smog,
        Sludge,
        BoneClub,
        FireBlast,
        Waterfall,
        Clamp,
        Swift,
        SkullBash,
        SpikeCannon,
        Constrict,
        Amnesia,
        Kinesis,
        Softboiled,
        HiJumpKick,
        Glare,
        DreamEater,
        PoisonGas,
        Barrage,
        LeechLife,
        LovelyKiss,
        SkyAttack,
        Transform,
        Bubble,
        DizzyPunch,
        Spore,
        Flash,
        Psywave,
        Splash,
        AcidArmor,
        Crabhammer,
        Explosion,
        FurySwipes,
        Bonemerang,
        Rest,
        RockSlide,
        HyperFang,
        Sharpen,
        Conversion,
        TriAttack,
        SuperFang,
        Slash,
        Substitute,
        Struggle,
        Sketch,
        TripleKick,
        Thief,
        SpiderWeb,
        MindReader,
        Nightmare,
        FlameWheel,
        Snore,
        Curse,
        Flail,
        Conversion2,
        Aeroblast,
        CottonSpore,
        Reversal,
        Spite,
        PowderSnow,
        Protect,
        MachPunch,
        ScaryFace,
        FaintAttack,
        SweetKiss,
        BellyDrum,
        SludgeBomb,
        Mud_Slap,
        Octazooka,
        Spikes,
        ZapCannon,
        Foresight,
        DestinyBond,
        PerishSong,
        IcyWind,
        Detect,
        BoneRush,
        Lock_On,
        Outrage,
        Sandstorm,
        GigaDrain,
        Endure,
        Charm,
        Rollout,
        FalseSwipe,
        Swagger,
        MilkDrink,
        Spark,
        FuryCutter,
        SteelWing,
        MeanLook,
        Attract,
        SleepTalk,
        HealBell,
        Return,
        Present,
        Frustration,
        Safeguard,
        PainSplit,
        SacredFire,
        Magnitude,
        DynamicPunch,
        Megahorn,
        DragonBreath,
        BatonPass,
        Encore,
        Pursuit,
        RapidSpin,
        SweetScent,
        IronTail,
        MetalClaw,
        VitalThrow,
        MorningSun,
        Synthesis,
        Moonlight,
        HiddenPower,
        CrossChop,
        Twister,
        RainDance,
        SunnyDay,
        Crunch,
        MirrorCoat,
        PsychUp,
        ExtremeSpeed,
        AncientPower,
        ShadowBall,
        FutureSight,
        RockSmash,
        Whirlpool,
        BeatUp,
        FakeOut,
        Uproar,
        Stockpile,
        SpitUp,
        Swallow,
        HeatWave,
        Hail,
        Torment,
        Flatter,
        Will_O_Wisp,
        Memento,
        Facade,
        FocusPunch,
        SmellingSalt,
        FollowMe,
        NaturePower,
        Charge,
        Taunt,
        HelpingHand,
        Trick,
        RolePlay,
        Wish,
        Assist,
        Ingrain,
        Superpower,
        MagicCoat,
        Recycle,
        Revenge,
        BrickBreak,
        Yawn,
        KnockOff,
        Endeavor,
        Eruption,
        SkillSwap,
        Imprison,
        Refresh,
        Grudge,
        Snatch,
        SecretPower,
        Dive,
        ArmThrust,
        Camouflage,
        TailGlow,
        LusterPurge,
        MistBall,
        FeatherDance,
        TeeterDance,
        BlazeKick,
        MudSport,
        IceBall,
        NeedleArm,
        SlackOff,
        HyperVoice,
        PoisonFang,
        CrushClaw,
        BlastBurn,
        HydroCannon,
        MeteorMash,
        Astonish,
        WeatherBall,
        Aromatherapy,
        FakeTears,
        AirCutter,
        Overheat,
        OdorSleuth,
        RockTomb,
        SilverWind,
        MetalSound,
        GrassWhistle,
        Tickle,
        CosmicPower,
        WaterSpout,
        SignalBeam,
        ShadowPunch,
        Extrasensory,
        SkyUppercut,
        SandTomb,
        SheerCold,
        MuddyWater,
        BulletSeed,
        AerialAce,
        IcicleSpear,
        IronDefense,
        Block,
        Howl,
        DragonClaw,
        FrenzyPlant,
        BulkUp,
        Bounce,
        MudShot,
        PoisonTail,
        Covet,
        VoltTackle,
        MagicalLeaf,
        WaterSport,
        CalmMind,
        LeafBlade,
        DragonDance,
        RockBlast,
        ShockWave,
        WaterPulse,
        DoomDesire,
        PsychoBoost,
        Roost,
        Gravity,
        MiracleEye,
        Wake_UpSlap,
        HammerArm,
        GyroBall,
        HealingWish,
        Brine,
        NaturalGift,
        Feint,
        Pluck,
        Tailwind,
        Acupressure,
        MetalBurst,
        U_turn,
        CloseCombat,
        Payback,
        Assurance,
        Embargo,
        Fling,
        PsychoShift,
        TrumpCard,
        HealBlock,
        WringOut,
        PowerTrick,
        GastroAcid,
        LuckyChant,
        MeFirst,
        Copycat,
        PowerSwap,
        GuardSwap,
        Punishment,
        LastResort,
        WorrySeed,
        SuckerPunch,
        ToxicSpikes,
        HeartSwap,
        AquaRing,
        MagnetRise,
        FlareBlitz,
        ForcePalm,
        AuraSphere,
        RockPolish,
        PoisonJab,
        DarkPulse,
        NightSlash,
        AquaTail,
        SeedBomb,
        AirSlash,
        X_Scissor,
        BugBuzz,
        DragonPulse,
        DragonRush,
        PowerGem,
        DrainPunch,
        VacuumWave,
        FocusBlast,
        EnergyBall,
        BraveBird,
        EarthPower,
        Switcheroo,
        GigaImpact,
        NastyPlot,
        BulletPunch,
        Avalanche,
        IceShard,
        ShadowClaw,
        ThunderFang,
        IceFang,
        FireFang,
        ShadowSneak,
        MudBomb,
        PsychoCut,
        ZenHeadbutt,
        MirrorShot,
        FlashCannon,
        RockClimb,
        Defog,
        TrickRoom,
        DracoMeteor,
        Discharge,
        LavaPlume,
        LeafStorm,
        PowerWhip,
        RockWrecker,
        CrossPoison,
        GunkShot,
        IronHead,
        MagnetBomb,
        StoneEdge,
        Captivate,
        StealthRock,
        GrassKnot,
        Chatter,
        Judgment,
        BugBite,
        ChargeBeam,
        WoodHammer,
        AquaJet,
        AttackOrder,
        DefendOrder,
        HealOrder,
        HeadSmash,
        DoubleHit,
        RoarofTime,
        SpacialRend,
        LunarDance,
        CrushGrip,
        MagmaStorm,
        DarkVoid,
        SeedFlare,
        OminousWind,
        ShadowForce,
        HoneClaws,
        WideGuard,
        GuardSplit,
        PowerSplit,
        WonderRoom,
        Psyshock,
        Venoshock,
        Autotomize,
        RagePowder,
        Telekinesis,
        MagicRoom,
        SmackDown,
        StormThrow,
        FlameBurst,
        SludgeWave,
        QuiverDance,
        HeavySlam,
        Synchronoise,
        ElectroBall,
        Soak,
        FlameCharge,
        Coil,
        LowSweep,
        AcidSpray,
        FoulPlay,
        SimpleBeam,
        Entrainment,
        AfterYou,
        Round,
        EchoedVoice,
        ChipAway,
        ClearSmog,
        StoredPower,
        QuickGuard,
        AllySwitch,
        Scald,
        ShellSmash,
        HealPulse,
        Hex,
        SkyDrop,
        ShiftGear,
        CircleThrow,
        Incinerate,
        Quash,
        Acrobatics,
        ReflectType,
        Retaliate,
        FinalGambit,
        Bestow,
        Inferno,
        WaterPledge,
        FirePledge,
        GrassPledge,
        VoltSwitch,
        StruggleBug,
        Bulldoze,
        FrostBreath,
        DragonTail,
        WorkUp,
        Electroweb,
        WildCharge,
        DrillRun,
        DualChop,
        HeartStamp,
        HornLeech,
        SacredSword,
        RazorShell,
        HeatCrash,
        LeafTornado,
        Steamroller,
        CottonGuard,
        NightDaze,
        Psystrike,
        TailSlap,
        Hurricane,
        HeadCharge,
        GearGrind,
        SearingShot,
        TechnoBlast,
        RelicSong,
        SecretSword,
        Glaciate,
        BoltStrike,
        BlueFlare,
        FieryDance,
        FreezeShock,
        IceBurn,
        Snarl,
        IcicleCrash,
        V_create,
        FusionFlare,
        FusionBolt
    };

    enum Items {
        NoItem,
        BigRoot,
        BlueScarf,
        BrightPowder,
        ChoiceBand,
        ChoiceScarf,
        ChoiceSpecs,
        DestinyKnot,
        ExpertBelt,
        FocusBand,
        FocusSash,
        FullIncense,
        GreenScarf,
        LaggingTail,
        LaxIncense,
        Leftovers,
        LuckIncense,
        MentalHerb,
        MetalPowder,
        MuscleBand,
        OddIncense,
        PinkScarf,
        PowerHerb,
        PureIncense,
        QuickPowder,
        ReaperCloth,
        RedScarf,
        RockIncense,
        RoseIncense,
        SeaIncense,
        ShedShell,
        SilkScarf,
        SilverPowder,
        SmoothRock,
        SoftSand,
        SootheBell,
        WaveIncense,
        WhiteHerb,
        WideLens,
        WiseGlasses,
        YellowScarf,
        ZoomLens,
        AmuletCoin,
        Antidote,
        Awakening,
        BerryJuice,
        BigPearl,
        BigMushroom,
        BlackBelt,
        BlackFlute,
        BlackSludge,
        BlackGlasses,
        BlueFlute,
        BlueShard,
        BurnHeal,
        Calcium,
        Carbos,
        Charcoal,
        CleanseTag,
        DampMulch,
        DeepSeaScale,
        DireHit,
        DragonScale,
        Elixir,
        EnergyRoot,
        EnergyPowder,
        EscapeRope,
        Ether,
        Everstone,
        ExpShare,
        FireStone,
        FlameOrb,
        FluffyTail,
        FreshWater,
        FullHeal,
        FullRestore,
        GooeyMulch,
        GreenShard,
        GrowthMulch,
        GuardSpec,
        HealPowder,
        HeartScale,
        Honey,
        HPUp,
        HyperPotion,
        IceHeal,
        Iron,
        KingsRock,
        LavaCookie,
        LeafStone,
        Lemonade,
        LifeOrb,
        LightBall,
        LightClay,
        LuckyEgg,
        Magnet,
        MaxElixir,
        MaxEther,
        MaxPotion,
        MaxRepel,
        MaxRevive,
        MetalCoat,
        MetronomeItem,
        MiracleSeed,
        MooMooMilk,
        MoonStone,
        MysticWater,
        NeverMeltIce,
        Nugget,
        OldGateau,
        ParlyzHeal,
        Pearl,
        PokeDoll,
        Potion,
        PPMax,
        PPUp,
        Protein,
        RareCandy,
        RazorFang,
        RedFlute,
        RedShard,
        Repel,
        RevivalHerb,
        Revive,
        SacredAsh,
        ScopeLens,
        ShellBell,
        ShoalSalt,
        ShoalShell,
        SmokeBall,
        SodaPop,
        SoulDew,
        SpellTag,
        StableMulch,
        StarPiece,
        Stardust,
        SunStone,
        SuperPotion,
        SuperRepel,
        Thunderstone,
        TinyMushroom,
        ToxicOrb,
        TwistedSpoon,
        UpGrade,
        WaterStone,
        WhiteFlute,
        XAccuracy,
        XAttack,
        XDefend,
        XSpecial,
        XSpDef,
        XSpeed,
        YellowFlute,
        YellowShard,
        Zinc,
        IcyRock,
        LuckyPunch,
        DubiousDisc,
        SharpBeak,
        AdamantOrb,
        DampRock,
        HeatRock,
        LustrousOrb,
        MachoBrace,
        Stick,
        DragonFang,
        PoisonBarb,
        PowerAnklet,
        PowerBand,
        PowerBelt,
        PowerBracer,
        PowerLens,
        PowerWeight,
        DawnStone,
        DuskStone,
        Electirizer,
        Magmarizer,
        OddKeystone,
        OvalStone,
        Protector,
        QuickClaw,
        RazorClaw,
        ShinyStone,
        StickyBarb,
        DeepSeaTooth,
        DracoPlate,
        DreadPlate,
        EarthPlate,
        FistPlate,
        FlamePlate,
        GripClaw,
        IciclePlate,
        InsectPlate,
        IronPlate,
        MeadowPlate,
        MindPlate,
        SkyPlate,
        SplashPlate,
        SpookyPlate,
        StonePlate,
        ThickClub,
        ToxicPlate,
        ZapPlate,
        ArmorFossil,
        ClawFossil,
        DomeFossil,
        HardStone,
        HelixFossil,
        OldAmber,
        RareBone,
        RootFossil,
        SkullFossil,
        IronBall,
        GriseousOrb,
        AirMail,
        BloomMail,
        BrickMail,
        BubbleMail,
        FlameMail,
        GrassMail,
        HarborMail,
        HeartMail,
        MosaicMail,
        SnowMail,
        SpaceMail,
        SteelMail,
        TunnelMail,
        DouseDrive,
        ShockDrive,
        BurnDrive,
        ChillDrive,
        SweetHeart,
        PrismScale,
        Eviolite,
        FloatStone,
        RockyHelmet,
        AirBalloon,
        RedCard,
        RingTarget,
        BindingBand,
        AbsorbBulb,
        CellBattery,
        EscapeButton,
        FireGem,
        WaterGem,
        ElectricGem,
        GrassGem,
        IceGem,
        FightGem,
        PoisonGem,
        EarthGem,
        FlightGem,
        PsychicGem,
        BugGem,
        RockGem,
        GhostGem,
        DragonGem,
        DarkGem,
        SteelGem,
        NormalGem,
        StrengthWing,
        PowerWing,
        ResistanceWing,
        WisdomWing,
        MindWing,
        InstantWing,
        BeautifulWing,
        DreamBall,
        FragrantMushroom,
        HugeGoldOrb,
        RoundPearl,
        CometPiece,
        AncientBronzeCoin,
        AncientSilverCoin,
        AncientGoldCoin,
        AncientVase,
        AncientBracelet,
        AncientStatue,
        AncientCrown,
        HiunIceCream,
        DireHit2,
        XSpeed2,
        XSpecial2,
        XSpDef2,
        XDefend2,
        XAttack2,
        XAccuracy2,
        XSpeed3,
        XSpecial3,
        XSpDef3,
        XDefend3,
        XAttack3,
        XAccuracy3,
        XSpeed6,
        XSpecial6,
        XSpDef6,
        XDefend6,
        XAttack6,
        XAccuracy6,
        SkillCall,
        ItemDrop,
        ItemCall,
        FlatCall,
        DireHit3,
        BerserkGene
    };

    Q_ENUMS(Moves)
    Q_ENUMS(Items)
};


#endif // PROXYDATACONTAINER_H
