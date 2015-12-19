mack = Creature:new {
	customName = "Mac",
	socialGroup = "",
	faction = "",
	level = 250,
	chanceHit = 24.9,
	damageMin = 5775,
	damageMax = 7260,
	baseXp = 32235,
	baseHAM = 1351000,
	baseHAMmax = 1462000,
	armor = 3,
	resists = {95,95,95,95,95,95,95,95,95},
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

	templates = {"object/mobile/dressed_death_watch_grey.iff"},
	scale = 1.8,
	lootGroups = {
		{
			groups = {
				{group = "holocron_dark", chance = 400000},
				{group = "holocron_light", chance = 400000},
				{group = "crystals_premium", chance = 400000},
				{group = "color_crystals", chance = 1000000},
				{group = "rifles", chance = 300000},
				{group = "pistols", chance = 300000},
				{group = "melee_weapons", chance = 1300000},
				{group = "armor_attachments", chance = 1900000},
				{group = "clothing_attachments", chance = 1900000},
				{group = "carbines", chance = 1300000},
				{group = "wearables_rare", chance = 800000}
			},
			lootChance = 7000000
		},
		{
			groups = {
				{group = "crystals_premium", chance = 500000},
				{group = "crystals_premium", chance = 500000},
				{group = "crystals_select", chance = 500000},
				{group = "color_crystals", chance = 2500000},
				{group = "melee_weapons", chance = 3000000},
				{group = "armor_attachments", chance = 1500000},
				{group = "clothing_attachments", chance = 1500000}
			},
			lootChance = 7000000
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
			lootChance = 7000000
		}
	},
	weapons = {"nyaxs_weapons"},
	conversationTemplate = "",
	reactionStf = "@npc_reaction/fancy",
	attacks = merge(riflemanmaster,carbineermaster,fencermaster)
}

CreatureTemplates:addCreatureTemplate(mack, "mack")
