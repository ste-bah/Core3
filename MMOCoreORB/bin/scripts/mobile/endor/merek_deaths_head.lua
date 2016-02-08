merek_deaths_head = Creature:new {
	objectName = "@mob/creature_names:merek_deaths_head",
	socialGroup = "merek",
	faction = "",
	level = 56,
	chanceHit = 10.55,
	damageMin = 1480,
	damageMax = 1670,
	baseXp = 15464,
	baseHAM = 69900,
	baseHAMmax = 82100,
	armor = 2,
	resists = {40,40,40,40,40,40,40,40,45},
	meatType = "meat_wild",
	meatAmount = 64,
	hideType = "hide_leathery",
	hideAmount = 45,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.05,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/merek_hue.iff"},
	controlDeviceTemplate = "object/intangible/pet/merek_hue.iff",
	scale = 1.6,
	lootGroups = {
	{
			groups = {
				{group = "holocron_dark", chance = 400000},
				{group = "holocron_light", chance = 400000},
				{group = "crystals_premium", chance = 400000},
				{group = "color_crystals_special", chance = 1000000},
				{group = "rifles", chance = 1300000},
				{group = "pistols", chance = 1300000},
				{group = "melee_unarmed", chance = 1300000},
				{group = "armor_attachments", chance = 900000},
				{group = "clothing_attachments", chance = 900000},
				{group = "carbines", chance = 1300000},
				{group = "wearables_rare", chance = 800000}
			},
			lootChance = 9000000},
			},
	weapons = {},
	conversationTemplate = "",
	attacks = {
		{"strongpoison",""},
		{"strongdisease",""}
	}
}

CreatureTemplates:addCreatureTemplate(merek_deaths_head, "merek_deaths_head")
