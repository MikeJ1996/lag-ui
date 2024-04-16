int TotalLoadCount;

modded class ItemBase
{			
	void ItemBase()
	{
		TotalLoadCount++;
	}

	void ~ItemBase()
	{
		TotalLoadCount--;
	}
}

#ifdef RA_BaseBuilding_Scripts
modded class BaseBuilding
{			
	void BaseBuilding()
	{
		BBCount++;
	}

	void ~BaseBuilding()
	{
		BBCount--;
	}
}
#else
int BBCount;
#endif

modded class BaseBuildingBase
{			
	void BaseBuildingBase()
	{
		BBCount++;
	}

	void ~BaseBuildingBase()
	{
		BBCount--;
	}
}