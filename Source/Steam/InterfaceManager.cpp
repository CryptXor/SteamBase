/*
	This project is released under the GPL 2.0 license.
	Please do no evil.

	Initial author: (https://github.com/)Convery
	Started: 2014-04-08
	Notes:
		Just to make it a little easier to handle the interfaces.
*/

#include "..\STDInclude.h"

std::unordered_map<SteamInterface_t, void *> InterfaceManager::Instances;

void *InterfaceManager::GetInterface(SteamInterface_t interfaceID)
{
	if (Instances.find(interfaceID) == Instances.end())
	{
		Instances[interfaceID] = CreateInterface(interfaceID);
	}

	return Instances[interfaceID];
}
void *InterfaceManager::CreateInterface(SteamInterface_t interfaceID)
{
	switch (interfaceID)
	{
	case INTERFACE_STEAMAPPS001:
		break;
	case INTERFACE_STEAMAPPS002:
		break;
	case INTERFACE_STEAMAPPS003:
		break;
	case INTERFACE_STEAMAPPS004:
		break;
	case INTERFACE_STEAMAPPS005:
		break;
	case INTERFACE_STEAMAPPS006:
		break;
	case INTERFACE_STEAMBILLING001:
		break;
	case INTERFACE_STEAMBILLING002:
		break;
	case INTERFACE_STEAMBILLING003:
		break;
	case INTERFACE_STEAMCLIENT006:
		break;
	case INTERFACE_STEAMCLIENT007:
		break;
	case INTERFACE_STEAMCLIENT008:
		break;
	case INTERFACE_STEAMCLIENT009:
		break;
	case INTERFACE_STEAMCLIENT010:
		break;
	case INTERFACE_STEAMCLIENT011:
		break;
	case INTERFACE_STEAMCLIENT012:
		break;
	case INTERFACE_STEAMCONTENTSERVER001:
		break;
	case INTERFACE_STEAMCONTENTSERVER002:
		break;
	case INTERFACE_STEAMFRIENDS001:
		break;
	case INTERFACE_STEAMFRIENDS002:
		break;
	case INTERFACE_STEAMFRIENDS003:
		break;
	case INTERFACE_STEAMFRIENDS004:
		break;
	case INTERFACE_STEAMFRIENDS005:
		break;
	case INTERFACE_STEAMFRIENDS006:
		break;
	case INTERFACE_STEAMFRIENDS007:
		break;
	case INTERFACE_STEAMFRIENDS008:
		break;
	case INTERFACE_STEAMFRIENDS009:
		break;
	case INTERFACE_STEAMFRIENDS010:
		break;
	case INTERFACE_STEAMFRIENDS011:
		break;
	case INTERFACE_STEAMFRIENDS012:
		break;
	case INTERFACE_STEAMFRIENDS013:
		break;
	case INTERFACE_STEAMFRIENDS014:
		break;
	case INTERFACE_STEAMGAMECOORDINATOR001:
		break;
	case INTERFACE_STEAMGAMESERVER002:
		break;
	case INTERFACE_STEAMGAMESERVER003:
		break;
	case INTERFACE_STEAMGAMESERVER004:
		break;
	case INTERFACE_STEAMGAMESERVER005:
		break;
	case INTERFACE_STEAMGAMESERVER006:
		break;
	case INTERFACE_STEAMGAMESERVER007:
		break;
	case INTERFACE_STEAMGAMESERVER008:
		break;
	case INTERFACE_STEAMGAMESERVER009:
		break;
	case INTERFACE_STEAMGAMESERVER010:
		break;
	case INTERFACE_STEAMGAMESERVER011:
		break;
	case INTERFACE_STEAMGAMESERVER012:
		break;
	case INTERFACE_STEAMGAMESERVERSTATS001:
		break;
	case INTERFACE_STEAMGAMESTATS001:
		break;
	case INTERFACE_STEAMHTTP001:
		break;
	case INTERFACE_STEAMHTTP002:
		break;
	case INTERFACE_STEAMMASTERUPDATER001:
		break;
	case INTERFACE_STEAMMATCHMAKING001:
		break;
	case INTERFACE_STEAMMATCHMAKING002:
		break;
	case INTERFACE_STEAMMATCHMAKING003:
		break;
	case INTERFACE_STEAMMATCHMAKING004:
		break;
	case INTERFACE_STEAMMATCHMAKING005:
		break;
	case INTERFACE_STEAMMATCHMAKING006:
		break;
	case INTERFACE_STEAMMATCHMAKING007:
		break;
	case INTERFACE_STEAMMATCHMAKING008:
		break;
	case INTERFACE_STEAMMATCHMAKING009:
		break;
	case INTERFACE_STEAMMATCHMAKINGSERVERS001:
		break;
	case INTERFACE_STEAMMATCHMAKINGSERVERS002:
		break;
	case INTERFACE_STEAMMUSIC001:
		break;
	case INTERFACE_STEAMNETWORKING001:
		break;
	case INTERFACE_STEAMNETWORKING002:
		break;
	case INTERFACE_STEAMNETWORKING003:
		break;
	case INTERFACE_STEAMNETWORKING004:
		break;
	case INTERFACE_STEAMNETWORKING005:
		break;
	case INTERFACE_STEAMOAUTH001:
		break;
	case INTERFACE_STEAMREMOTESTORAGE001:
		break;
	case INTERFACE_STEAMREMOTESTORAGE002:
		break;
	case INTERFACE_STEAMREMOTESTORAGE003:
		break;
	case INTERFACE_STEAMREMOTESTORAGE004:
		break;
	case INTERFACE_STEAMREMOTESTORAGE005:
		break;
	case INTERFACE_STEAMREMOTESTORAGE006:
		break;
	case INTERFACE_STEAMREMOTESTORAGE007:
		break;
	case INTERFACE_STEAMREMOTESTORAGE008:
		break;
	case INTERFACE_STEAMREMOTESTORAGE009:
		break;
	case INTERFACE_STEAMREMOTESTORAGE010:
		break;
	case INTERFACE_STEAMREMOTESTORAGE011:
		break;
	case INTERFACE_STEAMREMOTESTORAGE012:
		break;
	case INTERFACE_STEAMSCREENSHOTS001:
		break;
	case INTERFACE_STEAMSCREENSHOTS002:
		break;
	case INTERFACE_STEAMSTREAMLAUNCHER001:
		break;
	case INTERFACE_STEAMUGC001:
		break;
	case INTERFACE_STEAMUGC002:
		break;
	case INTERFACE_STEAMUNIFIEDMESSAGES001:
		break;
	case INTERFACE_STEAMUSER004:
		break;
	case INTERFACE_STEAMUSER005:
		break;
	case INTERFACE_STEAMUSER006:
		break;
	case INTERFACE_STEAMUSER007:
		break;
	case INTERFACE_STEAMUSER008:
		break;
	case INTERFACE_STEAMUSER009:
		break;
	case INTERFACE_STEAMUSER010:
		break;
	case INTERFACE_STEAMUSER011:
		break;
	case INTERFACE_STEAMUSER012:
		break;
	case INTERFACE_STEAMUSER013:
		break;
	case INTERFACE_STEAMUSER014:
		break;
	case INTERFACE_STEAMUSER015:
		break;
	case INTERFACE_STEAMUSER016:
		break;
	case INTERFACE_STEAMUSER017:
		break;
	case INTERFACE_STEAMUSERSTATS001:
		break;
	case INTERFACE_STEAMUSERSTATS002:
		break;
	case INTERFACE_STEAMUSERSTATS003:
		break;
	case INTERFACE_STEAMUSERSTATS004:
		break;
	case INTERFACE_STEAMUSERSTATS005:
		break;
	case INTERFACE_STEAMUSERSTATS006:
		break;
	case INTERFACE_STEAMUSERSTATS007:
		break;
	case INTERFACE_STEAMUSERSTATS008:
		break;
	case INTERFACE_STEAMUSERSTATS009:
		break;
	case INTERFACE_STEAMUSERSTATS010:
		break;
	case INTERFACE_STEAMUSERSTATS011:
		break;
	case INTERFACE_STEAMUTILS001:
		break;
	case INTERFACE_STEAMUTILS002:
		break;
	case INTERFACE_STEAMUTILS003:
		break;
	case INTERFACE_STEAMUTILS004:
		break;
	case INTERFACE_STEAMUTILS005:
		break;
	case INTERFACE_STEAMUTILS006:
		break;
	case INTERFACE_STEAMUTILS007:
		break;
	default:
		break;
	}

	return NULL;
}