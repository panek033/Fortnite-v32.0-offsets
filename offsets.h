namespace offsets
{
    //GOOD
    inline static uintptr_t UWorld = 0x12DA3A98;
    inline static uintptr_t OwningGameInstance = 0x208;
    inline static uintptr_t GameState = 0x190;
    inline static uintptr_t PlayerArray = 0x2c0;
    inline static uintptr_t PlayerController = 0x30;
    inline static uintptr_t PlayerState = 0x2B0;
    inline static uintptr_t OwningWorld = 0xC0;
    inline static uintptr_t PersistentLevel = 0x40;
    inline static uintptr_t ComponentToWorld = 0x1c0;
    inline static uintptr_t Mesh = 0x328;
    inline static uintptr_t RootComponent = 0x1B0;
    inline static uintptr_t PawnPrivate = 0x320;
    inline static uintptr_t LocalPlayers = 0x38;
    inline static uintptr_t Name = 0xAD0;
    inline static uintptr_t BoneArray = 0x580;
    inline static uintptr_t AcknowledgedPawn = 0x350;
    inline static uintptr_t Team_Index = 0xE88;


    //UNSURE
    inline static uintptr_t weapondata = 0x548;
    inline static uintptr_t CurrentWeapon = 0x9F8;
    inline static uintptr_t Velocity = 0x168;

    //99,99% outdated
    inline static uintptr_t fLastSubmitTime = 0x2E0;
    inline static uintptr_t fLastRenderTimeOnScreen = 0x2E8;
    inline static uintptr_t TargetedFortPawn = 0x1898;
}
TO READ UWORLD U DONT DO IT LIKE THAT ANYMORE:
Pointers.UWorld = read<__int64>(va_text + offsets::UWorld);
CUZ VA_TEXT IS NO LONGER NEEDED SO U CAN DELETE EVERYTHING WITH IT, AND TO CACHE UWORLD NOW U SHOULD JUST USE:
Pointers.UWorld = read<__int64>(virtualaddy + offsets::UWorld);