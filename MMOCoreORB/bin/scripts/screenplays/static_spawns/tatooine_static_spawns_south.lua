TatooineStaticSpawnsSouthScreenPlay = ScreenPlay:new {
	numberOfActs = 1,

	screenplayName = "TatooineStaticSpawnsSouthScreenPlay",

	lootContainers = {	
		1106593 -- -5350 -4438
	},

	lootLevel = 26,

	lootGroups = {
		{
			groups = {
				{group = "color_crystals", chance = 700000},
				{group = "junk", chance = 5500000},
				{group = "wearables_all", chance = 2000000},
				{group = "rifles", chance = 600000},
				{group = "pistols", chance = 600000},
				{group = "clothing_attachments", chance = 300000},
				{group = "armor_attachments", chance = 300000}
			},
			lootChance = 8000000
		}
	},

	lootContainerRespawn = 1800 -- 30 minutes

}

registerScreenPlay("TatooineStaticSpawnsSouthScreenPlay", true)

function TatooineStaticSpawnsSouthScreenPlay:start()
	if (isZoneEnabled("tatooine")) then
		self:spawnMobiles()
		self:initializeLootContainers()
	end
end

function TatooineStaticSpawnsSouthScreenPlay:spawnMobiles()
	--Tusken King Quest
	spawnMobile("tatooine", "tusken_king_quest", 300, -5350.2, 40, -4442.5, 139, 0)--entrance, spawns clock wise
	spawnMobile("tatooine", "tusken_bantha", 300, -5342.5, 40, -4430.6, 151, 0)
	spawnMobile("tatooine", "tusken_bantha", 300, -5323.2, 40, -4419.8, 157, 0)
	spawnMobile("tatooine", "tusken_raider", 300, -5317.1, 40, -4423.1, 135, 0)
	spawnMobile("tatooine", "tusken_sniper", 300, -5311.8, 40, -4424.3, -141, 0)
	spawnMobile("tatooine", "tusken_war_master", 300, -5303.7, 40, -4424.9, -154, 0)
	spawnMobile("tatooine", "tusken_guard", 300, -5297.9, 40, -4428.9, -134, 0)
	spawnMobile("tatooine", "tusken_warlord", 300, -5295.4, 40, -4432.8, -81, 0)
	spawnMobile("tatooine", "tusken_raid_hunter", 300, -5283.3, 40, -4435.6, 102, 0)
	spawnMobile("tatooine", "tusken_bantha", 300, -5287.7, 40, -4438.9, 80, 0)
	spawnMobile("tatooine", "tusken_raid_hunter", 300, -5284.1, 40, -4444.7, 70, 0)
	spawnMobile("tatooine", "tusken_bantha", 300, -5303.4, 40, -4458.5, -35, 0)
	spawnMobile("tatooine", "tusken_commoner", 300, -5319, 40, -4459.2, -7, 0)
	spawnMobile("tatooine", "tusken_commoner", 300, -5313.2, 40, -4459.7, -12, 0)
	spawnMobile("tatooine", "tusken_commoner", 300, -5317.3, 40, -4461.1, -2, 0)
	spawnMobile("tatooine", "tusken_commoner", 300, -5327, 40, -4452.9, -75, 0)--fire pit
	spawnMobile("tatooine", "tusken_torture_lord", 300, -5335.5, 40, -4464.2, -8, 0)--axe
	spawnMobile("tatooine", "tusken_berserker", 300, -5350, 40, -4463.3, -25, 0)--exit
	
	--World Static Spawns
	
	spawnMobile("tatooine", "bull_bantha", 300, -3399.1, 0.0, -5037.7, -81, 0)--Sunfall by Shuttle
	spawnMobile("tatooine", "bull_bantha", 300, -3392.2, 0.0, -5037.5, 126, 0)--Sunfall by Shuttle
	spawnMobile("tatooine", "jabba_scout", 300, -3392.0, 0.0, -4919.2, 83, 0)--Sunfall by City Hall
	spawnMobile("tatooine", "jabba_enforcer", 300, -3394.7, 0.0, -4918.8, -87, 0)--Sunfall by City Hall
	spawnMobile("tatooine", "jabba_enforcer", 300, -3388.6, 0.0, -4917.6, -98, 0)--Sunfall by City Hall
	spawnMobile("tatooine", "mack", 7200, -3460.3, 0.8, -5119.5, 27, 0)--Sunfall Northeast Mound
	spawnMobile("tatooine", "murm", 7200, -3324.9, 0.0, -5138.0, 103, 0)--Sunfall by Nothwest mound
	spawnMobile("tatooine", "rebel_battle_droid", 1200, -3396.1, 0.0, -5108.7, -82, 0)--Sunfall West mound
	spawnMobile("tatooine", "rebel_recruiter", 1, -3379, 0.0, -5084.9, -8, 0)--Sunfall by GH Rebel Term
	spawnMobile("tatooine", "imperial_recruiter", 1, -3412.2, 0.0, -5084.9, -17, 0)--Sunfall by GH Imp Term
	spawnMobile("tatooine", "jabba_scout", 300, -3338.1, 0.0, -4980.4, -124, 0)--Sunfall east of shuttle
	spawnMobile("tatooine", "jabba_scout", 300, -3341.0, 0.0, -4980.8, 57, 0)--Sunfall east of shuttle
	spawnMobile("tatooine", "krayt_dragon_ancient", 1200, -2979.1, 0.0, -5063.4, 45, 0)--Sunfall Maze
	
	spawnMobile("tatooine", "bol", 300, -3327.2, 0.0, -5031.8, 113, 0)--East of GH
	spawnMobile("tatooine", "bol", 300, -3324.7, 0.0, -5042.0, 170, 0)--East of GH
	spawnMobile("tatooine", "ronto", 300, -3385.4, 0.0, -4833.2, -176, 0)--North of CH
	spawnMobile("tatooine", "ronto", 300, -3393.9, 0.0, -4836.8, -111, 0)--North of CH
	spawnMobile("tatooine", "jabba_scout", 300, -3437.0, 0.0, -4978.5, 111, 0)--Sunfall West of shuttle
	spawnMobile("tatooine", "jabba_scout", 300, -3443.6, 0.0, -4977.7, -85, 0)--Sunfall West of shuttle
	spawnMobile("corellia", "vader", 1, -160.0, 28.0, -4722.9,94, 0)--Coronet vader
	spawnMobile("tatooine", "vader", 1, 3523.5, 5.0, -4802.3,91, 0)--Eisley vader
	spawnMobile("yavin4", "axkva_min", 1, -5575.7, 87.7, 4908.4,-3, 0)--light enclave doorway
	spawnMobile("yavin4", "axkva_min", 1, -5576.6, 87.7, 4907.8,-161, 0)--light enclave doorway
	spawnMobile("yavin4", "nightsister_elder", 1, -5574.3, 87.7, 4908.3,0, 0)--light enclave doorway
	spawnMobile("yavin4", "axkva_min", 1, 5063.8, 77, 311.5,7, 0)--dark enclave doorway
	spawnMobile("yavin4", "axkva_min", 1, 5063.8, 77, 310.2,119, 0)--dark enclave doorway
	spawnMobile("yavin4", "nightsister_elder", 1, 5063.4, 76.8, 308.9, 142, 0)--dark enclave doorway
	
	
	
	
end
