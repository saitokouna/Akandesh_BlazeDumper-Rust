#pragma once
#include <cstdint>

namespace blazedumper {
    constexpr ::std::ptrdiff_t BaseEntity_TypeInfo = 0x2F78688;
    constexpr ::std::ptrdiff_t Facepunch_Input_TypeInfo = 0x2FC8148;
    constexpr ::std::ptrdiff_t MainCamera_TypeInfo = 0x2FD9788;
    constexpr ::std::ptrdiff_t System_Collections_Generic_List_BaseGameMode_TypeInfo = 0x2FB6E10;
    constexpr ::std::ptrdiff_t BaseGameMode_TypeInfo = 0x2F788F8;
    namespace BasePlayer {
        constexpr ::std::ptrdiff_t __menuOption_Climb = 0x250; // Option
        constexpr ::std::ptrdiff_t __menuOption_Drink = 0x2B8; // Option
        constexpr ::std::ptrdiff_t __menuOption_InviteToTeam = 0x320; // Option
        constexpr ::std::ptrdiff_t __menuOption_Menu_AssistPlayer = 0x388; // Option
        constexpr ::std::ptrdiff_t __menuOption_Menu_LootPlayer = 0x3F0; // Option
        constexpr ::std::ptrdiff_t __menuOption_Promote = 0x458; // Option
        constexpr ::std::ptrdiff_t __menuOption_SaltWater = 0x4C0; // Option
        constexpr ::std::ptrdiff_t playerModel = 0x528; // PlayerModel
        constexpr ::std::ptrdiff_t Frozen = 0x530; // bool
        constexpr ::std::ptrdiff_t voiceRecorder = 0x538; // PlayerVoiceRecorder
        constexpr ::std::ptrdiff_t voiceSpeaker = 0x540; // PlayerVoiceSpeaker
        constexpr ::std::ptrdiff_t input = 0x548; // PlayerInput
        constexpr ::std::ptrdiff_t movement = 0x550; // BaseMovement
        constexpr ::std::ptrdiff_t collision = 0x558; // BaseCollision
        constexpr ::std::ptrdiff_t bagCount = 0x560; // int
        constexpr ::std::ptrdiff_t _lookingAt = 0x568; // GameObject
        constexpr ::std::ptrdiff_t _lookingAtEntity = 0x570; // BaseEntity
        constexpr ::std::ptrdiff_t _lookingAtCollider = 0x578; // Collider
        constexpr ::std::ptrdiff_t lookingAtPoint = 0x580; // Vector3
        constexpr ::std::ptrdiff_t wakeTime = 0x58C; // float
        constexpr ::std::ptrdiff_t needsClothesRebuild = 0x590; // bool
        constexpr ::std::ptrdiff_t wasSleeping = 0x591; // bool
        constexpr ::std::ptrdiff_t wokeUpBefore = 0x592; // bool
        constexpr ::std::ptrdiff_t wasDead = 0x593; // bool
        constexpr ::std::ptrdiff_t lastClothesHash = 0x594; // uint
        constexpr ::std::ptrdiff_t lastOpenSoundPlay = 0x598; // TimeSince
        constexpr ::std::ptrdiff_t currentViewMode = 0x59C; // BasePlayer.CameraMode
        constexpr ::std::ptrdiff_t selectedViewMode = 0x5A0; // BasePlayer.CameraMode
        constexpr ::std::ptrdiff_t lastRevivePoint = 0x5A4; // Vector3
        constexpr ::std::ptrdiff_t lastReviveDirection = 0x5B0; // Vector3
        constexpr ::std::ptrdiff_t IsWearingDiveGoggles = 0x5BC; // bool
        constexpr ::std::ptrdiff_t GestureViewModel = 0x5C0; // ViewModel
        constexpr ::std::ptrdiff_t currentClientRespawnInformation = 0x5C8; // RespawnInformation
        constexpr ::std::ptrdiff_t respawnOptionsTimestamp = 0x5D0; // float
        constexpr ::std::ptrdiff_t timeSinceUpdatedLookingAt = 0x5D4; // RealTimeSince
        constexpr ::std::ptrdiff_t nextTopologyTestTime = 0x5D8; // float
        constexpr ::std::ptrdiff_t usePressTime = 0x5DC; // float
        constexpr ::std::ptrdiff_t useHeldTime = 0x5E0; // float
        constexpr ::std::ptrdiff_t lookingAtTest = 0x5E8; // HitTest
        constexpr ::std::ptrdiff_t cachedWaterDrinkingPoint = 0x5F0; // Vector3
        constexpr ::std::ptrdiff_t gestureList = 0x600; // GestureCollection
        constexpr ::std::ptrdiff_t gestureFinishedTime = 0x608; // TimeUntil
        constexpr ::std::ptrdiff_t blockHeldInputTimer = 0x60C; // TimeSince
        constexpr ::std::ptrdiff_t currentGesture = 0x610; // GestureConfig
        constexpr ::std::ptrdiff_t disabledHeldEntity = 0x618; // HeldEntity
        constexpr ::std::ptrdiff_t nextGestureMenuOpenTime = 0x620; // float
        constexpr ::std::ptrdiff_t lastGestureCancel = 0x624; // TimeSince
        constexpr ::std::ptrdiff_t client_lastHelloTime = 0x628; // float
        constexpr ::std::ptrdiff_t currentTeam = 0x630; // ulong
        constexpr ::std::ptrdiff_t clientTeam = 0x638; // PlayerTeam
        constexpr ::std::ptrdiff_t lastReceivedTeamTime = 0x640; // float
        constexpr ::std::ptrdiff_t lastPresenceTeamId = 0x648; // ulong
        constexpr ::std::ptrdiff_t lastPresenceTeamSize = 0x650; // int
        constexpr ::std::ptrdiff_t playerGroupKey = 0x658; // string
        constexpr ::std::ptrdiff_t playerGroupSizeKey = 0x660; // string
        constexpr ::std::ptrdiff_t clActiveItem = 0x668; // ItemId
        constexpr ::std::ptrdiff_t ClientCurrentMapNotes = 0x670; // List<MapNote>
        constexpr ::std::ptrdiff_t ClientCurrentDeathNote = 0x678; // MapNote
        constexpr ::std::ptrdiff_t keepOpenMapInterface = 0x680; // bool
        constexpr ::std::ptrdiff_t missions = 0x688; // List<BaseMission.MissionInstance>
        constexpr ::std::ptrdiff_t _activeMission = 0x690; // int
        constexpr ::std::ptrdiff_t modelState = 0x698; // ModelState
        constexpr ::std::ptrdiff_t mounted = 0x6A0; // EntityRef
        constexpr ::std::ptrdiff_t nextSeatSwapTime = 0x6B0; // float
        constexpr ::std::ptrdiff_t PetEntity = 0x6B8; // BaseEntity
        constexpr ::std::ptrdiff_t lastPetCommandIssuedTime = 0x6C0; // float
        constexpr ::std::ptrdiff_t PetPrefabID = 0x6C4; // uint
        constexpr ::std::ptrdiff_t PetID = 0x6C8; // NetworkableId
        constexpr ::std::ptrdiff_t ClientCurrentPings = 0x6D0; // List<MapNote>
        constexpr ::std::ptrdiff_t tapInProcess = 0x6D8; // bool
        constexpr ::std::ptrdiff_t lastPingTap = 0x6DC; // TimeSince
        constexpr ::std::ptrdiff_t cachedBuildingPrivilegeTime = 0x6E0; // float
        constexpr ::std::ptrdiff_t cachedBuildingPrivilege = 0x6E8; // BuildingPrivlidge
        constexpr ::std::ptrdiff_t maxProjectileID = 0x6F0; // int
        constexpr ::std::ptrdiff_t lastUpdateTime = 0x6F4; // float
        constexpr ::std::ptrdiff_t cachedThreatLevel = 0x6F8; // float
        constexpr ::std::ptrdiff_t serverTickRate = 0x6FC; // int
        constexpr ::std::ptrdiff_t clientTickRate = 0x700; // int
        constexpr ::std::ptrdiff_t serverTickInterval = 0x704; // float
        constexpr ::std::ptrdiff_t clientTickInterval = 0x708; // float
        constexpr ::std::ptrdiff_t lastSentTickTime = 0x70C; // float
        constexpr ::std::ptrdiff_t lastTickStopwatch = 0x710; // Stopwatch
        constexpr ::std::ptrdiff_t lastSentTick = 0x718; // PlayerTick
        constexpr ::std::ptrdiff_t nextVisThink = 0x720; // float
        constexpr ::std::ptrdiff_t lastTimeSeen = 0x724; // float
        constexpr ::std::ptrdiff_t debugPrevVisible = 0x728; // bool
        constexpr ::std::ptrdiff_t fallDamageEffect = 0x730; // GameObjectRef
        constexpr ::std::ptrdiff_t drownEffect = 0x738; // GameObjectRef
        constexpr ::std::ptrdiff_t playerFlags = 0x740; // BasePlayer.PlayerFlags
        constexpr ::std::ptrdiff_t eyes = 0x748; // PlayerEyes
        constexpr ::std::ptrdiff_t inventory = 0x750; // PlayerInventory
        constexpr ::std::ptrdiff_t blueprints = 0x758; // PlayerBlueprints
        constexpr ::std::ptrdiff_t metabolism = 0x760; // PlayerMetabolism
        constexpr ::std::ptrdiff_t modifiers = 0x768; // PlayerModifiers
        constexpr ::std::ptrdiff_t playerCollider = 0x770; // CapsuleCollider
        constexpr ::std::ptrdiff_t Belt = 0x778; // PlayerBelt
        constexpr ::std::ptrdiff_t playerRigidbody = 0x780; // Rigidbody
        constexpr ::std::ptrdiff_t userID = 0x788; // ulong
        constexpr ::std::ptrdiff_t UserIDString = 0x790; // string
        constexpr ::std::ptrdiff_t gamemodeteam = 0x798; // int
        constexpr ::std::ptrdiff_t reputation = 0x79C; // int
        constexpr ::std::ptrdiff_t _displayName = 0x7A0; // string
        constexpr ::std::ptrdiff_t _lastSetName = 0x7A8; // string
        constexpr ::std::ptrdiff_t playerColliderStanding = 0x7B0; // BasePlayer.CapsuleColliderInfo
        constexpr ::std::ptrdiff_t playerColliderDucked = 0x7C4; // BasePlayer.CapsuleColliderInfo
        constexpr ::std::ptrdiff_t playerColliderCrawling = 0x7D8; // BasePlayer.CapsuleColliderInfo
        constexpr ::std::ptrdiff_t playerColliderLyingDown = 0x7EC; // BasePlayer.CapsuleColliderInfo
        constexpr ::std::ptrdiff_t cachedProtection = 0x800; // ProtectionProperties
        constexpr ::std::ptrdiff_t lastHeadshotSoundTime = 0x808; // float
        constexpr ::std::ptrdiff_t nextColliderRefreshTime = 0x80C; // float
        constexpr ::std::ptrdiff_t clothingBlocksAiming = 0x810; // bool
        constexpr ::std::ptrdiff_t clothingMoveSpeedReduction = 0x814; // float
        constexpr ::std::ptrdiff_t clothingWaterSpeedBonus = 0x818; // float
        constexpr ::std::ptrdiff_t clothingAccuracyBonus = 0x81C; // float
        constexpr ::std::ptrdiff_t equippingBlocked = 0x820; // bool
        constexpr ::std::ptrdiff_t eggVision = 0x824; // float
        constexpr ::std::ptrdiff_t activeTelephone = 0x828; // PhoneController
        constexpr ::std::ptrdiff_t designingAIEntity = 0x830; // BaseEntity
    } // namespace BasePlayer
    namespace BaseEntity {
        constexpr ::std::ptrdiff_t ragdoll = 0x78; // Ragdoll
        constexpr ::std::ptrdiff_t positionLerp = 0x80; // PositionLerp
        constexpr ::std::ptrdiff_t menuOptions = 0x88; // List<Option>
        constexpr ::std::ptrdiff_t bounds = 0x90; // Bounds
        constexpr ::std::ptrdiff_t impactEffect = 0xA8; // GameObjectRef
        constexpr ::std::ptrdiff_t enableSaving = 0xB0; // bool
        constexpr ::std::ptrdiff_t syncPosition = 0xB1; // bool
        constexpr ::std::ptrdiff_t model = 0xB8; // Model
        constexpr ::std::ptrdiff_t flags = 0xC0; // BaseEntity.Flags
        constexpr ::std::ptrdiff_t parentBone = 0xC4; // uint
        constexpr ::std::ptrdiff_t skinID = 0xC8; // ulong
        constexpr ::std::ptrdiff_t _components = 0xD0; // EntityComponentBase[]
        constexpr ::std::ptrdiff_t HasBrain = 0xD8; // bool
        constexpr ::std::ptrdiff_t _name = 0xE0; // string
        constexpr ::std::ptrdiff_t OwnerID = 0xE8; // ulong
        constexpr ::std::ptrdiff_t broadcastProtocol = 0xF0; // uint
        constexpr ::std::ptrdiff_t links = 0xF8; // List<EntityLink>
        constexpr ::std::ptrdiff_t linkedToNeighbours = 0x100; // bool
        constexpr ::std::ptrdiff_t _pendingFileRequests = 0x108; // List<BaseEntity.PendingFileRequest>
        constexpr ::std::ptrdiff_t updateParentingAction = 0x110; // Action
        constexpr ::std::ptrdiff_t addedToParentEntity = 0x118; // BaseEntity
        constexpr ::std::ptrdiff_t itemSkin = 0x120; // ItemSkin
        constexpr ::std::ptrdiff_t entitySlots = 0x128; // EntityRef[]
        constexpr ::std::ptrdiff_t triggers = 0x130; // List<TriggerBase>
        constexpr ::std::ptrdiff_t isVisible = 0x138; // bool
        constexpr ::std::ptrdiff_t isAnimatorVisible = 0x139; // bool
        constexpr ::std::ptrdiff_t isShadowVisible = 0x13A; // bool
        constexpr ::std::ptrdiff_t localOccludee = 0x140; // OccludeeSphere
        constexpr ::std::ptrdiff_t Weight = 0x160; // float
    } // namespace BaseEntity
    namespace BaseCombatEntity {
        constexpr ::std::ptrdiff_t __menuOption_Menu_Pickup = 0x168; // Option
        constexpr ::std::ptrdiff_t skeletonProperties = 0x1D0; // SkeletonProperties
        constexpr ::std::ptrdiff_t baseProtection = 0x1D8; // ProtectionProperties
        constexpr ::std::ptrdiff_t startHealth = 0x1E0; // float
        constexpr ::std::ptrdiff_t pickup = 0x1E8; // BaseCombatEntity.Pickup
        constexpr ::std::ptrdiff_t repair = 0x208; // BaseCombatEntity.Repair
        constexpr ::std::ptrdiff_t ShowHealthInfo = 0x230; // bool
        constexpr ::std::ptrdiff_t lifestate = 0x234; // BaseCombatEntity.LifeState
        constexpr ::std::ptrdiff_t sendsHitNotification = 0x238; // bool
        constexpr ::std::ptrdiff_t sendsMeleeHitNotification = 0x239; // bool
        constexpr ::std::ptrdiff_t markAttackerHostile = 0x23A; // bool
        constexpr ::std::ptrdiff_t _health = 0x23C; // float
        constexpr ::std::ptrdiff_t _maxHealth = 0x240; // float
        constexpr ::std::ptrdiff_t faction = 0x244; // BaseCombatEntity.Faction
        constexpr ::std::ptrdiff_t deathTime = 0x248; // float
        constexpr ::std::ptrdiff_t lastNotifyFrame = 0x24C; // int
    } // namespace BaseCombatEntity
    namespace BuildingPrivlidge {
        constexpr ::std::ptrdiff_t __menuOption_Menu_MaxAuth = 0x418; // Option
        constexpr ::std::ptrdiff_t __menuOption_Menu_RotateVM = 0x480; // Option
        constexpr ::std::ptrdiff_t __menuOption_MenuAuthorize = 0x4E8; // Option
        constexpr ::std::ptrdiff_t __menuOption_MenuClearList = 0x550; // Option
        constexpr ::std::ptrdiff_t __menuOption_MenuDeauthorize = 0x5B8; // Option
        constexpr ::std::ptrdiff_t authorizedPlayers = 0x620; // List<PlayerNameID>
        constexpr ::std::ptrdiff_t allowedConstructionItems = 0x628; // List<ItemDefinition>
        constexpr ::std::ptrdiff_t cachedProtectedMinutes = 0x630; // float
        constexpr ::std::ptrdiff_t cachedUpkeepPeriodMinutes = 0x634; // float
        constexpr ::std::ptrdiff_t cachedUpkeepCostFraction = 0x638; // float
    } // namespace BuildingPrivlidge
    namespace BaseProjectile {
        constexpr ::std::ptrdiff_t NoiseRadius = 0x280; // float
        constexpr ::std::ptrdiff_t damageScale = 0x284; // float
        constexpr ::std::ptrdiff_t distanceScale = 0x288; // float
        constexpr ::std::ptrdiff_t projectileVelocityScale = 0x28C; // float
        constexpr ::std::ptrdiff_t automatic = 0x290; // bool
        constexpr ::std::ptrdiff_t usableByTurret = 0x291; // bool
        constexpr ::std::ptrdiff_t turretDamageScale = 0x294; // float
        constexpr ::std::ptrdiff_t attackFX = 0x298; // GameObjectRef
        constexpr ::std::ptrdiff_t silencedAttack = 0x2A0; // GameObjectRef
        constexpr ::std::ptrdiff_t muzzleBrakeAttack = 0x2A8; // GameObjectRef
        constexpr ::std::ptrdiff_t MuzzlePoint = 0x2B0; // Transform
        constexpr ::std::ptrdiff_t reloadTime = 0x2B8; // float
        constexpr ::std::ptrdiff_t canUnloadAmmo = 0x2BC; // bool
        constexpr ::std::ptrdiff_t primaryMagazine = 0x2C0; // BaseProjectile.Magazine
        constexpr ::std::ptrdiff_t fractionalReload = 0x2C8; // bool
        constexpr ::std::ptrdiff_t reloadStartDuration = 0x2CC; // float
        constexpr ::std::ptrdiff_t reloadFractionDuration = 0x2D0; // float
        constexpr ::std::ptrdiff_t reloadEndDuration = 0x2D4; // float
        constexpr ::std::ptrdiff_t aimSway = 0x2D8; // float
        constexpr ::std::ptrdiff_t aimSwaySpeed = 0x2DC; // float
        constexpr ::std::ptrdiff_t recoil = 0x2E0; // RecoilProperties
        constexpr ::std::ptrdiff_t aimconeCurve = 0x2E8; // AnimationCurve
        constexpr ::std::ptrdiff_t aimCone = 0x2F0; // float
        constexpr ::std::ptrdiff_t hipAimCone = 0x2F4; // float
        constexpr ::std::ptrdiff_t aimconePenaltyPerShot = 0x2F8; // float
        constexpr ::std::ptrdiff_t aimConePenaltyMax = 0x2FC; // float
        constexpr ::std::ptrdiff_t aimconePenaltyRecoverTime = 0x300; // float
        constexpr ::std::ptrdiff_t aimconePenaltyRecoverDelay = 0x304; // float
        constexpr ::std::ptrdiff_t stancePenaltyScale = 0x308; // float
        constexpr ::std::ptrdiff_t hasADS = 0x30C; // bool
        constexpr ::std::ptrdiff_t noAimingWhileCycling = 0x30D; // bool
        constexpr ::std::ptrdiff_t manualCycle = 0x30E; // bool
        constexpr ::std::ptrdiff_t needsCycle = 0x30F; // bool
        constexpr ::std::ptrdiff_t isCycling = 0x310; // bool
        constexpr ::std::ptrdiff_t aiming = 0x311; // bool
        constexpr ::std::ptrdiff_t useEmptyAmmoState = 0x312; // bool
        constexpr ::std::ptrdiff_t isBurstWeapon = 0x313; // bool
        constexpr ::std::ptrdiff_t canChangeFireModes = 0x314; // bool
        constexpr ::std::ptrdiff_t defaultOn = 0x315; // bool
        constexpr ::std::ptrdiff_t internalBurstRecoilScale = 0x318; // float
        constexpr ::std::ptrdiff_t internalBurstFireRateScale = 0x31C; // float
        constexpr ::std::ptrdiff_t internalBurstAimConeScale = 0x320; // float
        constexpr ::std::ptrdiff_t Toast_BurstDisabled = 0x328; // Translate.Phrase
        constexpr ::std::ptrdiff_t Toast_BurstEnabled = 0x330; // Translate.Phrase
        constexpr ::std::ptrdiff_t resetDuration = 0x338; // float
        constexpr ::std::ptrdiff_t numShotsFired = 0x33C; // int
        constexpr ::std::ptrdiff_t nextReloadTime = 0x340; // float
        constexpr ::std::ptrdiff_t startReloadTime = 0x344; // float
        constexpr ::std::ptrdiff_t stancePenalty = 0x348; // float
        constexpr ::std::ptrdiff_t aimconePenalty = 0x34C; // float
        constexpr ::std::ptrdiff_t cachedModHash = 0x350; // uint
        constexpr ::std::ptrdiff_t sightAimConeScale = 0x354; // float
        constexpr ::std::ptrdiff_t sightAimConeOffset = 0x358; // float
        constexpr ::std::ptrdiff_t hipAimConeScale = 0x35C; // float
        constexpr ::std::ptrdiff_t hipAimConeOffset = 0x360; // float
        constexpr ::std::ptrdiff_t isReloading = 0x364; // bool
        constexpr ::std::ptrdiff_t timeSinceReloadFinished = 0x368; // TimeSince
        constexpr ::std::ptrdiff_t swaySampleTime = 0x36C; // float
        constexpr ::std::ptrdiff_t lastShotTime = 0x370; // float
        constexpr ::std::ptrdiff_t reloadPressTime = 0x374; // float
        constexpr ::std::ptrdiff_t ammoTypePreReload = 0x378; // ItemDefinition
        constexpr ::std::ptrdiff_t fractionalReloadDesiredCount = 0x380; // int
        constexpr ::std::ptrdiff_t fractionalReloadNumAdded = 0x384; // int
        constexpr ::std::ptrdiff_t currentBurst = 0x388; // int
        constexpr ::std::ptrdiff_t triggerReady = 0x38C; // bool
        constexpr ::std::ptrdiff_t nextHeightCheckTime = 0x390; // float
        constexpr ::std::ptrdiff_t cachedUnderground = 0x394; // bool
        constexpr ::std::ptrdiff_t createdProjectiles = 0x398; // List<Projectile>
    } // namespace BaseProjectile
    namespace Magazine {
        constexpr ::std::ptrdiff_t definition = 0x10; // BaseProjectile.Magazine.Definition
        constexpr ::std::ptrdiff_t capacity = 0x18; // int
        constexpr ::std::ptrdiff_t contents = 0x1C; // int
        constexpr ::std::ptrdiff_t ammoType = 0x20; // ItemDefinition
    } // namespace Magazine
    namespace PlayerInventory {
        constexpr ::std::ptrdiff_t containerMain = 0x20; // ItemContainer
        constexpr ::std::ptrdiff_t containerBelt = 0x28; // ItemContainer
        constexpr ::std::ptrdiff_t containerWear = 0x30; // ItemContainer
        constexpr ::std::ptrdiff_t crafting = 0x38; // ItemCrafter
        constexpr ::std::ptrdiff_t loot = 0x40; // PlayerLoot
    } // namespace PlayerInventory
    namespace ItemContainer {
        constexpr ::std::ptrdiff_t flags = 0x10; // ItemContainer.Flag
        constexpr ::std::ptrdiff_t allowedContents = 0x14; // ItemContainer.ContentsType
        constexpr ::std::ptrdiff_t onlyAllowedItems = 0x18; // ItemDefinition[]
        constexpr ::std::ptrdiff_t availableSlots = 0x20; // List<ItemSlot>
        constexpr ::std::ptrdiff_t capacity = 0x28; // int
        constexpr ::std::ptrdiff_t uid = 0x30; // ItemContainerId
        constexpr ::std::ptrdiff_t dirty = 0x38; // bool
        constexpr ::std::ptrdiff_t itemList = 0x40; // List<Item>
        constexpr ::std::ptrdiff_t temperature = 0x48; // float
        constexpr ::std::ptrdiff_t parent = 0x50; // Item
        constexpr ::std::ptrdiff_t playerOwner = 0x58; // BasePlayer
        constexpr ::std::ptrdiff_t entityOwner = 0x60; // BaseEntity
        constexpr ::std::ptrdiff_t isServer = 0x68; // bool
        constexpr ::std::ptrdiff_t maxStackSize = 0x6C; // int
    } // namespace ItemContainer
    namespace PlayerModel {
        constexpr ::std::ptrdiff_t collision = 0x18; // BoxCollider
        constexpr ::std::ptrdiff_t censorshipCube = 0x20; // GameObject
        constexpr ::std::ptrdiff_t censorshipCubeBreasts = 0x28; // GameObject
        constexpr ::std::ptrdiff_t jawBone = 0x30; // GameObject
        constexpr ::std::ptrdiff_t neckBone = 0x38; // GameObject
        constexpr ::std::ptrdiff_t headBone = 0x40; // GameObject
        constexpr ::std::ptrdiff_t eyeController = 0x48; // EyeController
        constexpr ::std::ptrdiff_t blinkController = 0x50; // EyeBlink
        constexpr ::std::ptrdiff_t SpineBones = 0x58; // Transform[]
        constexpr ::std::ptrdiff_t leftFootBone = 0x60; // Transform
        constexpr ::std::ptrdiff_t rightFootBone = 0x68; // Transform
        constexpr ::std::ptrdiff_t leftHandPropBone = 0x70; // Transform
        constexpr ::std::ptrdiff_t rightHandPropBone = 0x78; // Transform
        constexpr ::std::ptrdiff_t rightHandTarget = 0x80; // Vector3
        constexpr ::std::ptrdiff_t leftHandTargetPosition = 0x8C; // Vector3
        constexpr ::std::ptrdiff_t leftHandTargetRotation = 0x98; // Quaternion
        constexpr ::std::ptrdiff_t rightHandTargetPosition = 0xA8; // Vector3
        constexpr ::std::ptrdiff_t rightHandTargetRotation = 0xB4; // Quaternion
        constexpr ::std::ptrdiff_t steeringTargetDegrees = 0xC4; // float
        constexpr ::std::ptrdiff_t rightFootTargetPosition = 0xC8; // Vector3
        constexpr ::std::ptrdiff_t rightFootTargetRotation = 0xD4; // Quaternion
        constexpr ::std::ptrdiff_t leftFootTargetPosition = 0xE4; // Vector3
        constexpr ::std::ptrdiff_t leftFootTargetRotation = 0xF0; // Quaternion
        constexpr ::std::ptrdiff_t CinematicAnimationController = 0x100; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t DefaultAvatar = 0x108; // Avatar
        constexpr ::std::ptrdiff_t CinematicAvatar = 0x110; // Avatar
        constexpr ::std::ptrdiff_t DefaultHoldType = 0x118; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t SleepGesture = 0x120; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t CrawlToIncapacitatedGesture = 0x128; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t StandToIncapacitatedGesture = 0x130; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t CurrentGesture = 0x138; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t MaleSkin = 0x140; // SkinSetCollection
        constexpr ::std::ptrdiff_t FemaleSkin = 0x148; // SkinSetCollection
        constexpr ::std::ptrdiff_t subsurfaceProfile = 0x150; // SubsurfaceProfile
        constexpr ::std::ptrdiff_t voiceVolume = 0x158; // float
        constexpr ::std::ptrdiff_t skinColor = 0x15C; // float
        constexpr ::std::ptrdiff_t skinNumber = 0x160; // float
        constexpr ::std::ptrdiff_t meshNumber = 0x164; // float
        constexpr ::std::ptrdiff_t hairNumber = 0x168; // float
        constexpr ::std::ptrdiff_t skinType = 0x16C; // int
        constexpr ::std::ptrdiff_t movementSounds = 0x170; // MovementSounds
        constexpr ::std::ptrdiff_t showSash = 0x178; // bool
        constexpr ::std::ptrdiff_t tempPoseType = 0x17C; // int
        constexpr ::std::ptrdiff_t underwearSkin = 0x180; // uint
        constexpr ::std::ptrdiff_t overrideSkinSeed = 0x188; // ulong
        constexpr ::std::ptrdiff_t AimAngles = 0x190; // Quaternion
        constexpr ::std::ptrdiff_t LookAngles = 0x1A0; // Quaternion
        constexpr ::std::ptrdiff_t modelState = 0x1B0; // ModelState
        constexpr ::std::ptrdiff_t position = 0x1B8; // Vector3
        constexpr ::std::ptrdiff_t velocity = 0x1C4; // Vector3
        constexpr ::std::ptrdiff_t speedOverride = 0x1D0; // Vector3
        constexpr ::std::ptrdiff_t newVelocity = 0x1DC; // Vector3
        constexpr ::std::ptrdiff_t rotation = 0x1E8; // Quaternion
        constexpr ::std::ptrdiff_t mountedRotation = 0x1F8; // Quaternion
        constexpr ::std::ptrdiff_t smoothLeftFootIK = 0x208; // Vector3
        constexpr ::std::ptrdiff_t smoothRightFootIK = 0x214; // Vector3
        constexpr ::std::ptrdiff_t drawShadowOnly = 0x220; // bool
        constexpr ::std::ptrdiff_t isIncapacitated = 0x221; // bool
        constexpr ::std::ptrdiff_t flinchLocation = 0x224; // uint
        constexpr ::std::ptrdiff_t visible = 0x228; // bool
        constexpr ::std::ptrdiff_t nameTag = 0x230; // PlayerNameTag
        constexpr ::std::ptrdiff_t animatorNeedsWarmup = 0x238; // bool
        constexpr ::std::ptrdiff_t isLocalPlayer = 0x239; // bool
        constexpr ::std::ptrdiff_t aimSoundDef = 0x240; // SoundDefinition
        constexpr ::std::ptrdiff_t aimEndSoundDef = 0x248; // SoundDefinition
        constexpr ::std::ptrdiff_t InGesture = 0x250; // bool
        constexpr ::std::ptrdiff_t CurrentGestureConfig = 0x258; // GestureConfig
        constexpr ::std::ptrdiff_t InCinematic = 0x260; // bool
        constexpr ::std::ptrdiff_t defaultAnimatorController = 0x268; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t _multiMesh = 0x270; // SkinnedMultiMesh
        constexpr ::std::ptrdiff_t _animator = 0x278; // Animator
        constexpr ::std::ptrdiff_t _lodGroup = 0x280; // LODGroup
        constexpr ::std::ptrdiff_t _currentGesture = 0x288; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t holdTypeLock = 0x290; // float
        constexpr ::std::ptrdiff_t hasHeldEntity = 0x294; // bool
        constexpr ::std::ptrdiff_t wasMountedRightAim = 0x295; // bool
        constexpr ::std::ptrdiff_t cachedMask = 0x298; // int
        constexpr ::std::ptrdiff_t cachedConstructionMask = 0x29C; // int
        constexpr ::std::ptrdiff_t WorkshopHeldEntity = 0x2A0; // HeldEntity
        constexpr ::std::ptrdiff_t wasCrawling = 0x2A8; // bool
        constexpr ::std::ptrdiff_t mountedSpineLookWeight = 0x2AC; // float
        constexpr ::std::ptrdiff_t mountedAnimSpeed = 0x2B0; // float
        constexpr ::std::ptrdiff_t preserveBones = 0x2B4; // bool
        constexpr ::std::ptrdiff_t blendShapeControllers = 0x2C0; // List<BlendShapeController>
        constexpr ::std::ptrdiff_t IsNpc = 0x2C8; // bool
        constexpr ::std::ptrdiff_t timeSinceReactionStart = 0x2CC; // TimeSince
        constexpr ::std::ptrdiff_t timeSinceLeftFootTest = 0x2D0; // TimeSince
        constexpr ::std::ptrdiff_t cachedLeftFootPos = 0x2D4; // Vector3
        constexpr ::std::ptrdiff_t cachedLeftFootNormal = 0x2E0; // Vector3
        constexpr ::std::ptrdiff_t timeSinceRightFootTest = 0x2EC; // TimeSince
        constexpr ::std::ptrdiff_t cachedRightFootPos = 0x2F0; // Vector3
        constexpr ::std::ptrdiff_t cachedRightFootNormal = 0x2FC; // Vector3
        constexpr ::std::ptrdiff_t _smoothAimWeight = 0x308; // float
        constexpr ::std::ptrdiff_t _smoothVelocity = 0x30C; // float
        constexpr ::std::ptrdiff_t _smoothlookAngle = 0x310; // Vector3
        constexpr ::std::ptrdiff_t allowMountedHeadLook = 0x31C; // bool
        constexpr ::std::ptrdiff_t smoothLookDir = 0x320; // Vector3
        constexpr ::std::ptrdiff_t lastSafeLookDir = 0x32C; // Vector3
        constexpr ::std::ptrdiff_t Shoulders = 0x338; // Transform[]
        constexpr ::std::ptrdiff_t AdditionalSpineBones = 0x340; // Transform[]
        constexpr ::std::ptrdiff_t LegParts = 0x348; // List<SkinnedMeshRenderer>
        constexpr ::std::ptrdiff_t fakeSpineBones = 0x350; // Transform[]
        constexpr ::std::ptrdiff_t extraLeanBack = 0x358; // float
        constexpr ::std::ptrdiff_t timeInArmsMode = 0x360; // float
    } // namespace PlayerModel
    namespace ModelState {
        constexpr ::std::ptrdiff_t waterLevel = 0x10; // float
        constexpr ::std::ptrdiff_t lookDir = 0x14; // Vector3
        constexpr ::std::ptrdiff_t flags = 0x20; // int
        constexpr ::std::ptrdiff_t poseType = 0x24; // int
        constexpr ::std::ptrdiff_t inheritedVelocity = 0x28; // Vector3
        constexpr ::std::ptrdiff_t ShouldPool = 0x34; // bool
        constexpr ::std::ptrdiff_t _disposed = 0x35; // bool
    } // namespace ModelState
    namespace Item {
        constexpr ::std::ptrdiff_t _condition = 0x10; // float
        constexpr ::std::ptrdiff_t _maxCondition = 0x14; // float
        constexpr ::std::ptrdiff_t info = 0x18; // ItemDefinition
        constexpr ::std::ptrdiff_t uid = 0x20; // ItemId
        constexpr ::std::ptrdiff_t dirty = 0x28; // bool
        constexpr ::std::ptrdiff_t amount = 0x2C; // int
        constexpr ::std::ptrdiff_t position = 0x30; // int
        constexpr ::std::ptrdiff_t busyTime = 0x34; // float
        constexpr ::std::ptrdiff_t removeTime = 0x38; // float
        constexpr ::std::ptrdiff_t fuel = 0x3C; // float
        constexpr ::std::ptrdiff_t isServer = 0x40; // bool
        constexpr ::std::ptrdiff_t instanceData = 0x48; // Item.InstanceData
        constexpr ::std::ptrdiff_t skin = 0x50; // ulong
        constexpr ::std::ptrdiff_t name = 0x58; // string
        constexpr ::std::ptrdiff_t streamerName = 0x60; // string
        constexpr ::std::ptrdiff_t text = 0x68; // string
        constexpr ::std::ptrdiff_t cookTimeLeft = 0x70; // float
        constexpr ::std::ptrdiff_t progressBar = 0x74; // float
        constexpr ::std::ptrdiff_t flags = 0x80; // Item.Flag
        constexpr ::std::ptrdiff_t contents = 0x88; // ItemContainer
        constexpr ::std::ptrdiff_t parent = 0x90; // ItemContainer
        constexpr ::std::ptrdiff_t worldEnt = 0x98; // EntityRef
        constexpr ::std::ptrdiff_t heldEntity = 0xA8; // EntityRef
    } // namespace Item
    namespace Model {
        constexpr ::std::ptrdiff_t collision = 0x18; // SphereCollider
        constexpr ::std::ptrdiff_t rootBone = 0x20; // Transform
        constexpr ::std::ptrdiff_t headBone = 0x28; // Transform
        constexpr ::std::ptrdiff_t eyeBone = 0x30; // Transform
        constexpr ::std::ptrdiff_t animator = 0x38; // Animator
        constexpr ::std::ptrdiff_t skeleton = 0x40; // Skeleton
        constexpr ::std::ptrdiff_t boneTransforms = 0x48; // Transform[]
        constexpr ::std::ptrdiff_t boneNames = 0x50; // string[]
        constexpr ::std::ptrdiff_t boneDict = 0x58; // BoneDictionary
        constexpr ::std::ptrdiff_t skin = 0x60; // int
        constexpr ::std::ptrdiff_t _lodGroup = 0x68; // LODGroup
    } // namespace Model
    namespace RecoilProperties {
        constexpr ::std::ptrdiff_t recoilYawMin = 0x18; // float
        constexpr ::std::ptrdiff_t recoilYawMax = 0x1C; // float
        constexpr ::std::ptrdiff_t recoilPitchMin = 0x20; // float
        constexpr ::std::ptrdiff_t recoilPitchMax = 0x24; // float
        constexpr ::std::ptrdiff_t timeToTakeMin = 0x28; // float
        constexpr ::std::ptrdiff_t timeToTakeMax = 0x2C; // float
        constexpr ::std::ptrdiff_t ADSScale = 0x30; // float
        constexpr ::std::ptrdiff_t movementPenalty = 0x34; // float
        constexpr ::std::ptrdiff_t clampPitch = 0x38; // float
        constexpr ::std::ptrdiff_t pitchCurve = 0x40; // AnimationCurve
        constexpr ::std::ptrdiff_t yawCurve = 0x48; // AnimationCurve
        constexpr ::std::ptrdiff_t useCurves = 0x50; // bool
        constexpr ::std::ptrdiff_t curvesAsScalar = 0x51; // bool
        constexpr ::std::ptrdiff_t shotsUntilMax = 0x54; // int
        constexpr ::std::ptrdiff_t maxRecoilRadius = 0x58; // float
        constexpr ::std::ptrdiff_t overrideAimconeWithCurve = 0x5C; // bool
        constexpr ::std::ptrdiff_t aimconeCurveScale = 0x60; // float
        constexpr ::std::ptrdiff_t aimconeCurve = 0x68; // AnimationCurve
        constexpr ::std::ptrdiff_t aimconeProbabilityCurve = 0x70; // AnimationCurve
        constexpr ::std::ptrdiff_t newRecoilOverride = 0x78; // RecoilProperties
    } // namespace RecoilProperties
    namespace BaseFishingRod {
        constexpr ::std::ptrdiff_t FishingBobberRef = 0x1F8; // GameObjectRef
        constexpr ::std::ptrdiff_t FishCatchDistance = 0x200; // float
        constexpr ::std::ptrdiff_t ReelLineRenderer = 0x208; // LineRenderer
        constexpr ::std::ptrdiff_t LineRendererWorldStartPos = 0x210; // Transform
        constexpr ::std::ptrdiff_t CurrentState = 0x218; // BaseFishingRod.CatchState
        constexpr ::std::ptrdiff_t currentFishState = 0x21C; // BaseFishingRod.FishState
        constexpr ::std::ptrdiff_t currentBobber = 0x220; // EntityRef<FishingBobber>
        constexpr ::std::ptrdiff_t ConditionLossOnSuccess = 0x230; // float
        constexpr ::std::ptrdiff_t ConditionLossOnFail = 0x234; // float
        constexpr ::std::ptrdiff_t GlobalStrainSpeedMultiplier = 0x238; // float
        constexpr ::std::ptrdiff_t MaxCastDistance = 0x23C; // float
        constexpr ::std::ptrdiff_t ForceFish = 0x240; // ItemModFishable
        constexpr ::std::ptrdiff_t BobberPreview = 0x248; // GameObjectRef
        constexpr ::std::ptrdiff_t onLineSoundDef = 0x250; // SoundDefinition
        constexpr ::std::ptrdiff_t strainSoundDef = 0x258; // SoundDefinition
        constexpr ::std::ptrdiff_t strainGainCurve = 0x260; // AnimationCurve
        constexpr ::std::ptrdiff_t tensionBreakSoundDef = 0x268; // SoundDefinition
        constexpr ::std::ptrdiff_t lineRendererPositionsArray = 0x270; // Vector3[]
        constexpr ::std::ptrdiff_t lineRendererResultArray = 0x278; // Vector3[]
        constexpr ::std::ptrdiff_t lineRendererSlack = 0x280; // float[]
        constexpr ::std::ptrdiff_t clientStrainAmountNormalised = 0x288; // float
        constexpr ::std::ptrdiff_t canCancel = 0x28C; // TimeUntil
        constexpr ::std::ptrdiff_t rodViewModel = 0x290; // FishingRodViewmodel
        constexpr ::std::ptrdiff_t spawnedPreview = 0x298; // BobberPreview
        constexpr ::std::ptrdiff_t aimAnimationReady = 0x2A0; // bool
        constexpr ::std::ptrdiff_t onLineSound = 0x2A8; // Sound
        constexpr ::std::ptrdiff_t strainSound = 0x2B0; // Sound
        constexpr ::std::ptrdiff_t strainGainMod = 0x2B8; // SoundModulation.Modulator
        constexpr ::std::ptrdiff_t consumingBackMovement = 0x2C0; // TimeUntil
        constexpr ::std::ptrdiff_t reelInAnimTimer = 0x2C4; // TimeSince
    } // namespace BaseFishingRod
    namespace FishingBobber {
        constexpr ::std::ptrdiff_t centerOfMass = 0x250; // Transform
        constexpr ::std::ptrdiff_t myRigidBody = 0x258; // Rigidbody
        constexpr ::std::ptrdiff_t lineAttachPoint = 0x260; // Transform
        constexpr ::std::ptrdiff_t bobberRoot = 0x268; // Transform
        constexpr ::std::ptrdiff_t HorizontalMoveSpeed = 0x270; // float
        constexpr ::std::ptrdiff_t PullAwayMoveSpeed = 0x274; // float
        constexpr ::std::ptrdiff_t SidewaysInputForce = 0x278; // float
        constexpr ::std::ptrdiff_t ReelInMoveSpeed = 0x27C; // float
        constexpr ::std::ptrdiff_t fishLerp = 0x280; // float
        constexpr ::std::ptrdiff_t lastPosition = 0x284; // Vector3
    } // namespace FishingBobber
    namespace OcclusionCulling {
        constexpr ::std::ptrdiff_t computeShader = 0x18; // ComputeShader
        constexpr ::std::ptrdiff_t usePixelShaderFallback = 0x20; // bool
        constexpr ::std::ptrdiff_t useAsyncReadAPI = 0x21; // bool
        constexpr ::std::ptrdiff_t camera = 0x28; // Camera
        constexpr ::std::ptrdiff_t static_staticSet = 0x58; // OcclusionCulling.BufferSet
        constexpr ::std::ptrdiff_t static_dynamicSet = 0x60; // OcclusionCulling.BufferSet
        constexpr ::std::ptrdiff_t static_gridSet = 0x68; // OcclusionCulling.BufferSet
        constexpr ::std::ptrdiff_t frustumPlanes = 0x30; // Vector4[]
        constexpr ::std::ptrdiff_t frustumPropNames = 0x38; // string[]
        constexpr ::std::ptrdiff_t matrixToFloatTemp = 0x40; // float[]
        constexpr ::std::ptrdiff_t fallbackMat = 0x48; // Material
        constexpr ::std::ptrdiff_t depthCopyMat = 0x50; // Material
        constexpr ::std::ptrdiff_t viewMatrix = 0x58; // Matrix4x4
        constexpr ::std::ptrdiff_t projMatrix = 0x98; // Matrix4x4
        constexpr ::std::ptrdiff_t viewProjMatrix = 0xD8; // Matrix4x4
        constexpr ::std::ptrdiff_t prevViewProjMatrix = 0x118; // Matrix4x4
        constexpr ::std::ptrdiff_t invViewProjMatrix = 0x158; // Matrix4x4
        constexpr ::std::ptrdiff_t useNativePath = 0x198; // bool
        constexpr ::std::ptrdiff_t static_instance = 0x70; // OcclusionCulling
        constexpr ::std::ptrdiff_t static__enabled = 0x80; // bool
        constexpr ::std::ptrdiff_t static__safeMode = 0x81; // bool
        constexpr ::std::ptrdiff_t static__debugShow = 0x84; // OcclusionCulling.DebugFilter
        constexpr ::std::ptrdiff_t debugSettings = 0x1A0; // OcclusionCulling.DebugSettings
        constexpr ::std::ptrdiff_t debugMipMat = 0x1A8; // Material
        constexpr ::std::ptrdiff_t downscaleMat = 0x1B0; // Material
        constexpr ::std::ptrdiff_t blitCopyMat = 0x1B8; // Material
        constexpr ::std::ptrdiff_t hiZLevelCount = 0x1C0; // int
        constexpr ::std::ptrdiff_t hiZWidth = 0x1C4; // int
        constexpr ::std::ptrdiff_t hiZHeight = 0x1C8; // int
        constexpr ::std::ptrdiff_t depthTexture = 0x1D0; // RenderTexture
        constexpr ::std::ptrdiff_t hiZTexture = 0x1D8; // RenderTexture
        constexpr ::std::ptrdiff_t hiZLevels = 0x1E0; // RenderTexture[]
    } // namespace OcclusionCulling
    namespace OcclusionCulling_DebugSettings {
        constexpr ::std::ptrdiff_t log = 0x10; // bool
        constexpr ::std::ptrdiff_t showAllVisible = 0x11; // bool
        constexpr ::std::ptrdiff_t showMipChain = 0x12; // bool
        constexpr ::std::ptrdiff_t showMain = 0x13; // bool
        constexpr ::std::ptrdiff_t showMainLod = 0x14; // int
        constexpr ::std::ptrdiff_t showFallback = 0x18; // bool
        constexpr ::std::ptrdiff_t showStats = 0x19; // bool
        constexpr ::std::ptrdiff_t showScreenBounds = 0x1A; // bool
        constexpr ::std::ptrdiff_t showMask = 0x1C; // OcclusionCulling.DebugMask
        constexpr ::std::ptrdiff_t layerFilter = 0x20; // LayerMask
    } // namespace OcclusionCulling_DebugSettings
} // namespace blazedumper
