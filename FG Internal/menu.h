#pragma once
#include <Windows.h>

namespace FGInternal 
{
	namespace ESP 
	{
		extern bool correct_doors_enabled;
		extern bool correct_path_enabled;
		extern bool non_jinxed_players_enabled;
	};

	namespace OTHERS
	{
		extern bool fly_enabled;
		extern int fly_speed;

		extern bool speed_enabled;
		extern int speed_boost;

		extern bool dive_enabled;
		extern int dive_speed;

		extern bool gravity_enabled;
		extern int gravity_scale;

		extern bool stun_collision;
		extern bool object_collision;
	};
};

namespace FGInternalHelper
{
	extern bool disable_correct_doors;
	extern bool disable_correct_path;
	extern bool disable_non_jinxed_players;

	extern bool disable_fly;
	extern bool disable_speed;
	extern bool disable_dive;
	extern bool disable_gravity;
};

namespace menu { 
	void draw( );
	void update_keys( );
	void update_indicators( );
};