test3 = Creature:new {
	customName = "Spike",
	socialGroup = "townsperson",
	faction = "townsperson",
	level = 300,
	chanceHit = 10,
	damageMin = 645,
	damageMax = 1000,
	baseXp = 29429,
	baseHAM = 224000,
	baseHAMmax = 320000,
	armor = 2,
	resists = {50,50,50,50,50,50,50,50,100},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_dathomir_prisoner_01.iff",
				 "object/mobile/dressed_dathomir_prisoner_02.iff",
				 "object/mobile/dressed_dathomir_prisoner_03.iff",
				 "object/mobile/dressed_dathomir_prisoner_04.iff",
				 "object/mobile/dressed_dathomir_prisoner_05.iff"},
	lootGroups = {
		{
			groups = {
				{group = "holocron_dark", chance = 400000},
				{group = "holocron_light", chance = 400000},
				{group = "crystals_premium", chance = 400000},
				{group = "color_crystals", chance = 1000000},
				{group = "rifles", chance = 1300000},
				{group = "pistols", chance = 1300000},
				{group = "melee_weapons", chance = 1300000},
				{group = "armor_attachments", chance = 900000},
				{group = "clothing_attachments", chance = 900000},
				{group = "carbines", chance = 1300000},
				{group = "wearables_rare", chance = 800000}
			},
			lootChance = 7000000
		},
		{
			groups = {
				{group = "crystals_premium", chance = 1500000},
				{group = "crystals_premium", chance = 500000},
				{group = "crystals_select", chance = 500000},
				{group = "color_crystals", chance = 2500000},
				{group = "melee_weapons", chance = 2000000},
				{group = "armor_attachments", chance = 1500000},
				{group = "clothing_attachments", chance = 1500000}
			},
			lootChance = 6000000
		},
		{
			groups = {
				{group = "crystals_premium", chance = 1500000},
				{group = "crystals_select", chance = 500000},
				{group = "crystals_premium", chance = 500000},
				{group = "color_crystals", chance = 2500000},
				{group = "armor_all", chance = 2000000},
				{group = "armor_attachments", chance = 1500000},
				{group = "clothing_attachments", chance = 1500000}
			},
			lootChance = 6000000
		}
	},
	weapons = {"dark_trooper_weapons"},
	conversationTemplate = "",
	attacks = merge(riflemanmaster,carbineermaster,fencermaster)
}

CreatureTemplates:addCreatureTemplate(test3, "test3")