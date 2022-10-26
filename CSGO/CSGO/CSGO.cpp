#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>
#include <array>
constexpr ::std::ptrdiff_t cs_gamerules_data = 0x0;
constexpr ::std::ptrdiff_t m_ArmorValue = 0x117CC;
constexpr ::std::ptrdiff_t m_Collision = 0x320;
constexpr ::std::ptrdiff_t m_CollisionGroup = 0x474;
constexpr ::std::ptrdiff_t m_Local = 0x2FCC;
constexpr ::std::ptrdiff_t m_MoveType = 0x25C;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31D4;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31D0;
constexpr ::std::ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x1328;
constexpr ::std::ptrdiff_t m_SurvivalRules = 0xD00;
constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x303C;
constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3048;
constexpr ::std::ptrdiff_t m_angEyeAnglesX = 0x117D0;
constexpr ::std::ptrdiff_t m_angEyeAnglesY = 0x117D4;
constexpr ::std::ptrdiff_t m_bBombDefused = 0x29C0;
constexpr ::std::ptrdiff_t m_bBombPlanted = 0x9A5;
constexpr ::std::ptrdiff_t m_bBombTicking = 0x2990;
constexpr ::std::ptrdiff_t m_bFreezePeriod = 0x20;
constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x9990;
constexpr ::std::ptrdiff_t m_bHasDefuser = 0x117DC;
constexpr ::std::ptrdiff_t m_bHasHelmet = 0x117C0;
constexpr ::std::ptrdiff_t m_bInReload = 0x32B5;
constexpr ::std::ptrdiff_t m_bIsDefusing = 0x997C;
constexpr ::std::ptrdiff_t m_bIsQueuedMatchmaking = 0x74;
constexpr ::std::ptrdiff_t m_bIsScoped = 0x9974;
constexpr ::std::ptrdiff_t m_bIsValveDS = 0x7C;
constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
constexpr ::std::ptrdiff_t m_bStartedArming = 0x3400;
constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMax = 0x9D9;
constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMin = 0x9D8;
constexpr ::std::ptrdiff_t m_bUseCustomBloomScale = 0x9DA;
constexpr ::std::ptrdiff_t m_clrRender = 0x70;
constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x3340;
constexpr ::std::ptrdiff_t m_fFlags = 0x104;
constexpr ::std::ptrdiff_t m_flC4Blow = 0x29A0;
constexpr ::std::ptrdiff_t m_flCustomAutoExposureMax = 0x9E0;
constexpr ::std::ptrdiff_t m_flCustomAutoExposureMin = 0x9DC;
constexpr ::std::ptrdiff_t m_flCustomBloomScale = 0x9E4;
constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x29BC;
constexpr ::std::ptrdiff_t m_flDefuseLength = 0x29B8;
constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31E0;
constexpr ::std::ptrdiff_t m_flFlashDuration = 0x10470;
constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0x1046C;
constexpr ::std::ptrdiff_t m_flLastBoneSetupTime = 0x2928;
constexpr ::std::ptrdiff_t m_flLowerBodyYawTarget = 0x9ADC;
constexpr ::std::ptrdiff_t m_flNextAttack = 0x2D80;
constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3248;
constexpr ::std::ptrdiff_t m_flSimulationTime = 0x268;
constexpr ::std::ptrdiff_t m_flTimerLength = 0x29A4;
constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2F08;
constexpr ::std::ptrdiff_t m_hBombDefuser = 0x29C4;
constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2E08;
constexpr ::std::ptrdiff_t m_hObserverTarget = 0x339C;
constexpr ::std::ptrdiff_t m_hOwner = 0x29DC;
constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
constexpr ::std::ptrdiff_t m_hViewModel = 0x3308;
constexpr ::std::ptrdiff_t m_iAccountID = 0x2FD8;
constexpr ::std::ptrdiff_t m_iClip1 = 0x3274;
constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
constexpr ::std::ptrdiff_t m_iCrosshairId = 0x11838;
constexpr ::std::ptrdiff_t m_iDefaultFOV = 0x333C;
constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FBC;
constexpr ::std::ptrdiff_t m_iFOV = 0x31F4;
constexpr ::std::ptrdiff_t m_iFOVStart = 0x31F8;
constexpr ::std::ptrdiff_t m_iGlowIndex = 0x10488;
constexpr ::std::ptrdiff_t m_iHealth = 0x100;
constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FBA;
constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FD0;
constexpr ::std::ptrdiff_t m_iMostRecentModelBoneCounter = 0x2690;
constexpr ::std::ptrdiff_t m_iObserverMode = 0x3388;
constexpr ::std::ptrdiff_t m_iShotsFired = 0x103E0;
constexpr ::std::ptrdiff_t m_iState = 0x3268;
constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
constexpr ::std::ptrdiff_t m_nBombSite = 0x2994;
constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31D8;
constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31DC;
constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31E4;
constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
constexpr ::std::ptrdiff_t m_nModelIndex = 0x258;
constexpr ::std::ptrdiff_t m_nTickBase = 0x3440;
constexpr ::std::ptrdiff_t m_nViewModelIndex = 0x29D0;
constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x444;
constexpr ::std::ptrdiff_t m_szCustomName = 0x304C;
constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35C4;
constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31E8;
constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3030;
constexpr ::std::ptrdiff_t m_zoomLevel = 0x33E0;
constexpr ::std::ptrdiff_t anim_overlays = 0x2990;
constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4D30;
constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4D2C;
constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
constexpr ::std::ptrdiff_t convar_name_hash_table = 0x301A0;
constexpr ::std::ptrdiff_t dwClientState = 0x59F194;
constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4D48;
constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x388;
constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52C0;
constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D90;
constexpr ::std::ptrdiff_t dwEntityList = 0x4DFBE64;
constexpr ::std::ptrdiff_t dwForceAttack = 0x3229CCC;
constexpr ::std::ptrdiff_t dwForceAttack2 = 0x3229CD8;
constexpr ::std::ptrdiff_t dwForceBackward = 0x3229C78;
constexpr ::std::ptrdiff_t dwForceForward = 0x3229CFC;
constexpr ::std::ptrdiff_t dwForceJump = 0x52B7BEC;
constexpr ::std::ptrdiff_t dwForceLeft = 0x3229C84;
constexpr ::std::ptrdiff_t dwForceRight = 0x3229C90;
constexpr ::std::ptrdiff_t dwGameDir = 0x63AD80;
constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x532B41C;
constexpr ::std::ptrdiff_t dwGetAllClasses = 0xE07FDC;
constexpr ::std::ptrdiff_t dwGlobalVars = 0x59EE58;
constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x5356910;
constexpr ::std::ptrdiff_t dwInput = 0x5259438;
constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x998C74;
constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDE6964;
constexpr ::std::ptrdiff_t dwMouseEnable = 0x5235098;
constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0x5235068;
constexpr ::std::ptrdiff_t dwPlayerResource = 0x3228010;
constexpr ::std::ptrdiff_t dwRadarBase = 0x523293C;
constexpr ::std::ptrdiff_t dwSensitivity = 0xDEAB80;
constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xDEAB80;
constexpr ::std::ptrdiff_t dwSetClanTag = 0x8DA80;
constexpr ::std::ptrdiff_t dwViewMatrix = 0x4DECC94;
constexpr ::std::ptrdiff_t dwWeaponTable = 0x525A514;
constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x326C;
constexpr ::std::ptrdiff_t dwYawPtr = 0xDEA910;
constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xDF0380;
constexpr ::std::ptrdiff_t dwbSendPackets = 0xDCF62;
constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA62C0;
constexpr ::std::ptrdiff_t find_hud_element = 0x5710D9F0;
constexpr ::std::ptrdiff_t force_update_spectator_glow = 0x3D716A;
constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3FA9C;
constexpr ::std::ptrdiff_t is_c4_owner = 0x3E49A0;
constexpr ::std::ptrdiff_t m_bDormant = 0xED;
constexpr ::std::ptrdiff_t m_bIsLocalPlayer = 0x3628;
constexpr ::std::ptrdiff_t m_flSpawnTime = 0x103C0;
constexpr ::std::ptrdiff_t m_pStudioHdr = 0x2950;
constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x5234F90;
constexpr ::std::ptrdiff_t m_yawClassPtr = 0xDEA910;
constexpr ::std::ptrdiff_t model_ambient_min = 0x5A118C;
constexpr ::std::ptrdiff_t set_abs_angles = 0x1E5090;
constexpr ::std::ptrdiff_t set_abs_origin = 0x1E4ED0;

using namespace std;

class Memory
{
private:
	std::uintptr_t processId = 0;
	void* processHandle = nullptr;

public:
	// Constructor that finds the process id
	// and opens a handle
	Memory(const string processName) noexcept
	{
		::PROCESSENTRY32 entry = { };
		entry.dwSize = sizeof(::PROCESSENTRY32);

		const auto snapShot = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

		while (::Process32Next(snapShot, &entry))
		{
			if (!processName.compare(entry.szExeFile))
			{
				processId = entry.th32ProcessID;
				processHandle = ::OpenProcess(PROCESS_ALL_ACCESS, FALSE, processId);
				break;
			}
		}

		// Free handle
		if (snapShot)
			::CloseHandle(snapShot);
	}

	// Destructor that frees the opened handle
	~Memory()
	{
		if (processHandle)
			::CloseHandle(processHandle);
	}

	// Returns the base address of a module by name
	const std::uintptr_t GetModuleAddress(const string moduleName) const noexcept
	{
		::MODULEENTRY32 entry = { };
		entry.dwSize = sizeof(::MODULEENTRY32);

		const auto snapShot = ::CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, processId);

		std::uintptr_t result = 0;

		while (::Module32Next(snapShot, &entry))
		{
			if (!moduleName.compare(entry.szModule))
			{
				result = reinterpret_cast<std::uintptr_t>(entry.modBaseAddr);
				break;
			}
		}

		if (snapShot)
			::CloseHandle(snapShot);

		return result;
	}

	// Read process memory
	template <typename T>
	constexpr const T Read(const std::uintptr_t& address) const noexcept
	{
		T value = { };
		::ReadProcessMemory(processHandle, reinterpret_cast<const void*>(address), &value, sizeof(T), NULL);
		return value;
	}

	// Write process memory
	template <typename T>
	constexpr void Write(const std::uintptr_t& address, const T& value) const noexcept
	{
		::WriteProcessMemory(processHandle, reinterpret_cast<void*>(address), &value, sizeof(T), NULL);
	}
};
int MethodOfFiring(int weapon) {
	//6 = fully automatic
	//5 = revolver style shoot
	//4=for bolt-action snipers
	//3 =semi-auto
	//2 =for sg 4 shots
	//1 = for  3 shots
	//0 = nothing
	switch (weapon) {
	case 64:
		return 5;
		break;
	case 7:
		return 3;
		break;
	case 27:
		return 3;
		break;
	case 29:
		return 3;
		break;
	case 35:
		return 3;
		break;
	case 1:
		return 4;
		break;
	case 9:
		return 4;
		break;
	case 40:
		return 4;
		break;
	case 13:
		return 1;
		break;
	case 25:
		return 1;
		break;
	case 10:
		return 1;
		break;
	case 16:
		return 1;
		break;
	case 60:
		return 1;
		break;
	case 14:
		return 1;
		break;
	case 63:
		return 1;
		break;
	case 39:
		return 2;
		break;

	case 38:
		return 2;
		break;
	case 11:
		return 2;
		break;
	case 8:
		return 2;
		break;
	case 28:
		return 2;
		break;
	case 26:
		return 6;
		break;
	case 24:
		return 6;
		break;
	default:
		return 0;
		break;
	}
	
	
}
void TriggerBot() {
	
	
}
int main() {

	int maximum = 50;
	const auto memory = Memory{ "csgo.exe" };
	int result;
	const auto client = memory.GetModuleAddress("client.dll");
	while (true) {
		int localplayer = memory.Read<uintptr_t>(client+dwLocalPlayer);
		int activeweapon = memory.Read<uintptr_t>(localplayer + m_hActiveWeapon);
		int weapon = memory.Read<uintptr_t>((client+dwEntityList+(activeweapon & 0xFFF)*0x10)-0x10);
		int weaponid = memory.Read<int>(weapon + m_iItemDefinitionIndex);
		int crosshairid = memory.Read<int>(localplayer+m_iCrosshairId);
		//cout << crosshairid << endl;
		
		cout << weaponid << endl;
		int teamnum = memory.Read<int>(localplayer + m_iTeamNum);
		int crosshairentity = memory.Read<uintptr_t>(client + dwEntityList + 0x8);
		int crosshairentity2 = memory.Read<uintptr_t>(crosshairentity + crosshairid * 0x10);
		int crosshairteam = memory.Read<int>(crosshairentity2 + m_iTeamNum);
		//cout << crosshairteam << endl;
		if (teamnum != crosshairteam) {
		
			if (crosshairid <= maximum && crosshairid > 0 && MethodOfFiring(weaponid) == 1) {
				//cout << MethodOfFiring(weaponid) << endl;

					//cout << "I will use ak47" << endl;

				for (int i = 0; i < 3; i++) {
					memory.Write<int>(client + dwForceAttack, 5);
					Sleep(100);
					memory.Write<int>(client + dwForceAttack, 4);
				}
				Sleep(100);
				memory.Write<int>(client + dwForceAttack, 4);


			}

			if (crosshairid <= maximum && crosshairid > 0 && MethodOfFiring(weaponid) == 2) {
				//cout << MethodOfFiring(weaponid) << endl;

					//cout << "I will use ak47" << endl;

				for (int i = 0; i < 4; i++) {
					memory.Write<int>(client + dwForceAttack, 5);
					Sleep(100);
					memory.Write<int>(client + dwForceAttack, 4);
				}
				Sleep(100);
				memory.Write<int>(client + dwForceAttack, 4);


			}

			if (crosshairid <= maximum && crosshairid > 0 && MethodOfFiring(weaponid) == 3) {
				//cout << MethodOfFiring(weaponid) << endl;

					//cout << "I will use ak47" << endl;

				for (int i = 0; i < 1; i++) {
					memory.Write<int>(client + dwForceAttack, 5);
					Sleep(100);
					memory.Write<int>(client + dwForceAttack, 4);
				}
				Sleep(100);
				memory.Write<int>(client + dwForceAttack, 4);


			}
			if (crosshairid <= maximum && crosshairid > 0 && MethodOfFiring(weaponid) == 4) {
				//cout << MethodOfFiring(weaponid) << endl;

					//cout << "I will use ak47" << endl;

				for (int i = 0; i < 1; i++) {

					memory.Write<int>(client + dwForceAttack, 5);
					Sleep(100);
					memory.Write<int>(client + dwForceAttack, 4);
				}
				Sleep(500);
				memory.Write<int>(client + dwForceAttack, 4);


			}
			if (MethodOfFiring(weaponid) == 5) {

				memory.Write<int>(client + dwForceAttack, 5);



				memory.Write<int>(client + dwForceAttack, 4);

				if (crosshairid <= maximum && crosshairid > 0) {
					//cout << MethodOfFiring(weaponid) << endl;

						//cout << "I will use ak47" << endl;

					for (int i = 0; i < 1; i++) {
						memory.Write<int>(client + dwForceAttack, 5);
						Sleep(10);
						memory.Write<int>(client + dwForceAttack, 4);

					}



				}
			}
			if (crosshairid <= maximum && crosshairid > 0 && MethodOfFiring(weaponid) == 6) {
				//cout << MethodOfFiring(weaponid) << endl;

					//cout << "I will use ak47" << endl;

				
					memory.Write<int>(client + dwForceAttack, 5);
					Sleep(10);
					memory.Write<int>(client + dwForceAttack, 4);
				
				


			}
		}
	}
}