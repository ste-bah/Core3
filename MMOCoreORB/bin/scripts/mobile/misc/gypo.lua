gypo = Creature:new {
	customName = "Gypo Metal Thief",
	socialGroup = "",
	faction = "",
	level = 250,
	chanceHit = 14.9,
	damageMin = 1775,
	damageMax = 2260,
	baseXp = 32235,
	baseHAM = 251000,
	baseHAMmax = 462000,
	armor = 2,
	resists = {55,55,55,55,55,55,55,55,95},
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
	creatureBitmask = KILLER + STALKER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_patron_chiss_m_01.iff"},
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
	weapons = {"nyaxs_weapons"},
	conversationTemplate = "",
	reactionStf = "@npc_reaction/fancy",
	attacks = merge(brawlermaster,swordsmanmaster,forcewielder)
}

CreatureTemplates:addCreatureTemplate(gypo, "gypo")