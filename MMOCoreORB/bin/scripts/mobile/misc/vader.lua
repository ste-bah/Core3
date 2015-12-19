vader = Creature:new {
	customName = "Welcome. Start your adventure at Sunfall on Tatooine. Turn on General chat",
	socialGroup = "",
	faction = "",
	level = 600,
	chanceHit = 30,
	damageMin = 10645,
	damageMax = 30000,
	baseXp = 28549,
	baseHAM = 3805000,
	baseHAMmax = 4701000,
	armor = 3,
	resists = {90,90,90,90,90,90,09,90,91},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = PACK,
	optionsBitmask = 264,
	diet = HERBIVORE,
  	scale = 2.5,

	templates = {"object/mobile/darth_vader.iff"},
	lootGroups = {
	},
	weapons = {},
	conversationTemplate = "theme_park_imperial_mission_giver_convotemplate",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(vader, "vader")
