#include "mb_level.h"
#include "mb_level_factory.h"
#include "mb_menu.h"

Level * MBLevelFactory::make_level(const string &level_id){
    if(level_id == "menu")
        return new MBMenu(0, 142, 50, "menu", "", "");
	else if(level_id == "lt_1")
		return new MBPlayableLevel(255, 0, 0, "lt_1", "lt_2", "");
	else if(level_id == "lt_2")
		return new MBPlayableLevel(255, 0, 0, "lt_2", "lt_3", "");
	else if(level_id == "lt_3")
		return new MBPlayableLevel(255, 0, 0, "lt_3", "lt_4", "");
	else if(level_id == "lt_4")
		return new MBPlayableLevel(255, 0, 0, "lt_4", "menu", "");

	else if(level_id == "mb_1")
		return new MBPlayableLevel(255, 0, 0, "mb_1", "mb_2", "");
	else if(level_id == "mb_2")
		return new MBPlayableLevel(255, 0, 0, "mb_2", "mb_3", "");
	else
		return nullptr;
}

void MBLevelFactory::release(Level *level){
	delete level;
}
