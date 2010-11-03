/*
 *	server/zone/objects/player/EntertainingSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "EntertainingSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/tangible/Instrument.h"

#include "server/zone/objects/player/events/EntertainingSessionTask.h"

#include "server/zone/objects/player/EntertainingObserver.h"

#include "server/zone/objects/tangible/Instrument.h"

/*
 *	EntertainingSessionStub
 */

EntertainingSession::EntertainingSession(CreatureObject* ent) : Facade(DummyConstructorParameter::instance()) {
	EntertainingSessionImplementation* _implementation = new EntertainingSessionImplementation(ent);
	_impl = _implementation;
	_impl->_setStub(this);
}

EntertainingSession::EntertainingSession(DummyConstructorParameter* param) : Facade(param) {
}

EntertainingSession::~EntertainingSession() {
}


void EntertainingSession::doEntertainerPatronEffects() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->doEntertainerPatronEffects();
}

void EntertainingSession::doPerformanceAction() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		_implementation->doPerformanceAction();
}

void EntertainingSession::addEntertainerFlourishBuff() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		_implementation->addEntertainerFlourishBuff();
}

void EntertainingSession::startDancing(const String& dance, const String& animation) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(dance);
		method.addAsciiParameter(animation);

		method.executeWithVoidReturn();
	} else
		_implementation->startDancing(dance, animation);
}

void EntertainingSession::startPlayingMusic(const String& song, const String& instrumentAnimation, int instrid) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addAsciiParameter(song);
		method.addAsciiParameter(instrumentAnimation);
		method.addSignedIntParameter(instrid);

		method.executeWithVoidReturn();
	} else
		_implementation->startPlayingMusic(song, instrumentAnimation, instrid);
}

void EntertainingSession::startEntertaining() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		_implementation->startEntertaining();
}

void EntertainingSession::healWounds(CreatureObject* creature, float woundHeal, float shockHeal) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(creature);
		method.addFloatParameter(woundHeal);
		method.addFloatParameter(shockHeal);

		method.executeWithVoidReturn();
	} else
		_implementation->healWounds(creature, woundHeal, shockHeal);
}

bool EntertainingSession::isInEntertainingBuilding(CreatureObject* creature) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(creature);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInEntertainingBuilding(creature);
}

void EntertainingSession::doFlourish(int flourishNumber) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addSignedIntParameter(flourishNumber);

		method.executeWithVoidReturn();
	} else
		_implementation->doFlourish(flourishNumber);
}

bool EntertainingSession::canGiveEntertainBuff() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->canGiveEntertainBuff();
}

void EntertainingSession::addFlourishXp(int xp) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(xp);

		method.executeWithVoidReturn();
	} else
		_implementation->addFlourishXp(xp);
}

void EntertainingSession::addHealingXp(int xp) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(xp);

		method.executeWithVoidReturn();
	} else
		_implementation->addHealingXp(xp);
}

int EntertainingSession::initializeSession() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int EntertainingSession::cancelSession() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int EntertainingSession::clearSession() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

void EntertainingSession::stopPlayingMusic() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		method.executeWithVoidReturn();
	} else
		_implementation->stopPlayingMusic();
}

void EntertainingSession::stopDancing() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		method.executeWithVoidReturn();
	} else
		_implementation->stopDancing();
}

void EntertainingSession::activateAction() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		method.executeWithVoidReturn();
	} else
		_implementation->activateAction();
}

void EntertainingSession::startTickTask() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		method.executeWithVoidReturn();
	} else
		_implementation->startTickTask();
}

void EntertainingSession::addEntertainerBuffDuration(CreatureObject* creature, int performanceType, float duration) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->addEntertainerBuffDuration(creature, performanceType, duration);
}

void EntertainingSession::addEntertainerBuffStrength(CreatureObject* creature, int performanceType, float strength) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->addEntertainerBuffStrength(creature, performanceType, strength);
}

void EntertainingSession::setEntertainerBuffDuration(CreatureObject* creature, int performanceType, float duration) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setEntertainerBuffDuration(creature, performanceType, duration);
}

void EntertainingSession::setEntertainerBuffStrength(CreatureObject* creature, int performanceType, float strength) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setEntertainerBuffStrength(creature, performanceType, strength);
}

int EntertainingSession::getEntertainerBuffStrength(CreatureObject* creature, int performanceType) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addObjectParameter(creature);
		method.addSignedIntParameter(performanceType);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getEntertainerBuffStrength(creature, performanceType);
}

int EntertainingSession::getEntertainerBuffDuration(CreatureObject* creature, int performanceType) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addObjectParameter(creature);
		method.addSignedIntParameter(performanceType);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getEntertainerBuffDuration(creature, performanceType);
}

void EntertainingSession::sendEntertainingUpdate(CreatureObject* creature, float entval, const String& performance, unsigned int perfcntr, int instrid) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addObjectParameter(creature);
		method.addFloatParameter(entval);
		method.addAsciiParameter(performance);
		method.addUnsignedIntParameter(perfcntr);
		method.addSignedIntParameter(instrid);

		method.executeWithVoidReturn();
	} else
		_implementation->sendEntertainingUpdate(creature, entval, performance, perfcntr, instrid);
}

void EntertainingSession::sendEntertainmentUpdate(CreatureObject* creature, unsigned long long entid, const String& mood, bool updateEntValue) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(creature);
		method.addUnsignedLongParameter(entid);
		method.addAsciiParameter(mood);
		method.addBooleanParameter(updateEntValue);

		method.executeWithVoidReturn();
	} else
		_implementation->sendEntertainmentUpdate(creature, entid, mood, updateEntValue);
}

void EntertainingSession::activateEntertainerBuff(CreatureObject* creature, int performanceType) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addObjectParameter(creature);
		method.addSignedIntParameter(performanceType);

		method.executeWithVoidReturn();
	} else
		_implementation->activateEntertainerBuff(creature, performanceType);
}

Instrument* EntertainingSession::getInstrument(CreatureObject* creature) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addObjectParameter(creature);

		return (Instrument*) method.executeWithObjectReturn();
	} else
		return _implementation->getInstrument(creature);
}

void EntertainingSession::addWatcher(CreatureObject* creature) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		_implementation->addWatcher(creature);
}

void EntertainingSession::addListener(CreatureObject* listener) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addObjectParameter(listener);

		method.executeWithVoidReturn();
	} else
		_implementation->addListener(listener);
}

bool EntertainingSession::isDancing() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isDancing();
}

bool EntertainingSession::isPlayingMusic() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isPlayingMusic();
}

bool EntertainingSession::isAcceptingBandFlourishes() {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isAcceptingBandFlourishes();
}

void EntertainingSession::setAcceptingBandFlourishes(bool val) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addBooleanParameter(val);

		method.executeWithVoidReturn();
	} else
		_implementation->setAcceptingBandFlourishes(val);
}

void EntertainingSession::removeWatcher(CreatureObject* creature) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		_implementation->removeWatcher(creature);
}

void EntertainingSession::removeListener(CreatureObject* creature) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		_implementation->removeListener(creature);
}

void EntertainingSession::setPerformanceName(const String& name) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->setPerformanceName(name);
}

void EntertainingSession::setDancing(bool val) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);
		method.addBooleanParameter(val);

		method.executeWithVoidReturn();
	} else
		_implementation->setDancing(val);
}

void EntertainingSession::setTargetInstrument(bool var) {
	EntertainingSessionImplementation* _implementation = (EntertainingSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);
		method.addBooleanParameter(var);

		method.executeWithVoidReturn();
	} else
		_implementation->setTargetInstrument(var);
}

DistributedObjectServant* EntertainingSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void EntertainingSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	EntertainingSessionImplementation
 */

EntertainingSessionImplementation::EntertainingSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


EntertainingSessionImplementation::~EntertainingSessionImplementation() {
	EntertainingSessionImplementation::finalize();
}


void EntertainingSessionImplementation::_initializeImplementation() {
	_setClassHelper(EntertainingSessionHelper::instance());

	_serializationHelperMethod();
}

void EntertainingSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (EntertainingSession*) stub;
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* EntertainingSessionImplementation::_getStub() {
	return _this;
}

EntertainingSessionImplementation::operator const EntertainingSession*() {
	return _this;
}

void EntertainingSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void EntertainingSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void EntertainingSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void EntertainingSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void EntertainingSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void EntertainingSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void EntertainingSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void EntertainingSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("EntertainingSession");

	addSerializableVariable("entertainer", &entertainer);
	addSerializableVariable("observer", &observer);
	addSerializableVariable("watchers", &watchers);
	addSerializableVariable("listeners", &listeners);
	addSerializableVariable("nextTick", &nextTick);
	addSerializableVariable("performanceName", &performanceName);
	addSerializableVariable("dancing", &dancing);
	addSerializableVariable("playingMusic", &playingMusic);
	addSerializableVariable("flourishXp", &flourishXp);
	addSerializableVariable("healingXp", &healingXp);
	addSerializableVariable("flourishCount", &flourishCount);
	addSerializableVariable("acceptingBandFlourishes", &acceptingBandFlourishes);
	addSerializableVariable("targetInstrument", &targetInstrument);
	addSerializableVariable("externalInstrument", &externalInstrument);
}

EntertainingSessionImplementation::EntertainingSessionImplementation(CreatureObject* ent) {
	_initializeImplementation();
	// server/zone/objects/player/EntertainingSession.idl(93):  		entertainer = ent;
	entertainer = ent;
	// server/zone/objects/player/EntertainingSession.idl(95):  		flourishXp = 0;
	flourishXp = 0;
	// server/zone/objects/player/EntertainingSession.idl(96):  		healingXp = 0;
	healingXp = 0;
	// server/zone/objects/player/EntertainingSession.idl(97):  		flourishCount = 0;
	flourishCount = 0;
	// server/zone/objects/player/EntertainingSession.idl(99):  		observer = null;
	observer = NULL;
	// server/zone/objects/player/EntertainingSession.idl(101):  		dancing = false;
	dancing = false;
	// server/zone/objects/player/EntertainingSession.idl(102):  		playingMusic = false;
	playingMusic = false;
	// server/zone/objects/player/EntertainingSession.idl(103):  		acceptingBandFlourishes = true;
	acceptingBandFlourishes = true;
	// server/zone/objects/player/EntertainingSession.idl(104):  		targetInstrument = false;
	targetInstrument = false;
	// server/zone/objects/player/EntertainingSession.idl(106):  		watchers.setNoDuplicateInsertPlan();
	(&watchers)->setNoDuplicateInsertPlan();
	// server/zone/objects/player/EntertainingSession.idl(107):  		listeners.setNoDuplicateInsertPlan();
	(&listeners)->setNoDuplicateInsertPlan();
	// server/zone/objects/player/EntertainingSession.idl(109):  		Logger.setLoggingName("EntertainingSession");
	Logger::setLoggingName("EntertainingSession");
	// server/zone/objects/player/EntertainingSession.idl(110):  		Logger.setLogging(false);
	Logger::setLogging(false);
}

void EntertainingSessionImplementation::finalize() {
}

void EntertainingSessionImplementation::addFlourishXp(int xp) {
	// server/zone/objects/player/EntertainingSession.idl(135):  		flourishXp 
	if (flourishCount > 2)	// server/zone/objects/player/EntertainingSession.idl(136):  			return;
	return;
	// server/zone/objects/player/EntertainingSession.idl(138):  = flourishXp + xp;
	flourishXp = flourishXp + xp;
	// server/zone/objects/player/EntertainingSession.idl(140):  		flourishCount 
	if (flourishXp > 2 * xp)	// server/zone/objects/player/EntertainingSession.idl(141):  			flourishXp = 2 * xp;
	flourishXp = 2 * xp;
	// server/zone/objects/player/EntertainingSession.idl(143):  = flourishCount + 1;
	flourishCount = flourishCount + 1;
}

void EntertainingSessionImplementation::addHealingXp(int xp) {
	// server/zone/objects/player/EntertainingSession.idl(147):  		healingXp = healingXp + xp;
	healingXp = healingXp + xp;
}

int EntertainingSessionImplementation::initializeSession() {
	// server/zone/objects/player/EntertainingSession.idl(151):  		return 0;
	return 0;
}

int EntertainingSessionImplementation::cancelSession() {
	// server/zone/objects/player/EntertainingSession.idl(155):  		stopPlayingMusic();
	stopPlayingMusic();
	// server/zone/objects/player/EntertainingSession.idl(156):  		stopDancing();
	stopDancing();
	// server/zone/objects/player/EntertainingSession.idl(158):  		return 0;
	return 0;
}

int EntertainingSessionImplementation::clearSession() {
	// server/zone/objects/player/EntertainingSession.idl(162):  		return 0;
	return 0;
}

bool EntertainingSessionImplementation::isDancing() {
	// server/zone/objects/player/EntertainingSession.idl(197):  		return dancing;
	return dancing;
}

bool EntertainingSessionImplementation::isPlayingMusic() {
	// server/zone/objects/player/EntertainingSession.idl(201):  		return playingMusic;
	return playingMusic;
}

bool EntertainingSessionImplementation::isAcceptingBandFlourishes() {
	// server/zone/objects/player/EntertainingSession.idl(205):  		return acceptingBandFlourishes;
	return acceptingBandFlourishes;
}

void EntertainingSessionImplementation::setAcceptingBandFlourishes(bool val) {
	// server/zone/objects/player/EntertainingSession.idl(209):  		acceptingBandFlourishes = val;
	acceptingBandFlourishes = val;
}

void EntertainingSessionImplementation::removeWatcher(CreatureObject* creature) {
	// server/zone/objects/player/EntertainingSession.idl(213):  		watchers.drop(creature);
	(&watchers)->drop(creature);
}

void EntertainingSessionImplementation::removeListener(CreatureObject* creature) {
	// server/zone/objects/player/EntertainingSession.idl(217):  		listeners.drop(creature);
	(&listeners)->drop(creature);
}

void EntertainingSessionImplementation::setPerformanceName(const String& name) {
	// server/zone/objects/player/EntertainingSession.idl(221):  		performanceName = name;
	performanceName = name;
}

void EntertainingSessionImplementation::setDancing(bool val) {
	// server/zone/objects/player/EntertainingSession.idl(225):  		dancing = val;
	dancing = val;
}

void EntertainingSessionImplementation::setTargetInstrument(bool var) {
	// server/zone/objects/player/EntertainingSession.idl(229):  		targetInstrument = var;
	targetInstrument = var;
}

/*
 *	EntertainingSessionAdapter
 */

EntertainingSessionAdapter::EntertainingSessionAdapter(EntertainingSessionImplementation* obj) : FacadeAdapter(obj) {
}

Packet* EntertainingSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		doEntertainerPatronEffects();
		break;
	case 7:
		doPerformanceAction();
		break;
	case 8:
		addEntertainerFlourishBuff();
		break;
	case 9:
		startDancing(inv->getAsciiParameter(_param0_startDancing__String_String_), inv->getAsciiParameter(_param1_startDancing__String_String_));
		break;
	case 10:
		startPlayingMusic(inv->getAsciiParameter(_param0_startPlayingMusic__String_String_int_), inv->getAsciiParameter(_param1_startPlayingMusic__String_String_int_), inv->getSignedIntParameter());
		break;
	case 11:
		startEntertaining();
		break;
	case 12:
		finalize();
		break;
	case 13:
		healWounds((CreatureObject*) inv->getObjectParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 14:
		resp->insertBoolean(isInEntertainingBuilding((CreatureObject*) inv->getObjectParameter()));
		break;
	case 15:
		doFlourish(inv->getSignedIntParameter());
		break;
	case 16:
		resp->insertBoolean(canGiveEntertainBuff());
		break;
	case 17:
		addFlourishXp(inv->getSignedIntParameter());
		break;
	case 18:
		addHealingXp(inv->getSignedIntParameter());
		break;
	case 19:
		resp->insertSignedInt(initializeSession());
		break;
	case 20:
		resp->insertSignedInt(cancelSession());
		break;
	case 21:
		resp->insertSignedInt(clearSession());
		break;
	case 22:
		stopPlayingMusic();
		break;
	case 23:
		stopDancing();
		break;
	case 24:
		activateAction();
		break;
	case 25:
		startTickTask();
		break;
	case 26:
		resp->insertSignedInt(getEntertainerBuffStrength((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 27:
		resp->insertSignedInt(getEntertainerBuffDuration((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 28:
		sendEntertainingUpdate((CreatureObject*) inv->getObjectParameter(), inv->getFloatParameter(), inv->getAsciiParameter(_param2_sendEntertainingUpdate__CreatureObject_float_String_int_int_), inv->getUnsignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 29:
		sendEntertainmentUpdate((CreatureObject*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getAsciiParameter(_param2_sendEntertainmentUpdate__CreatureObject_long_String_bool_), inv->getBooleanParameter());
		break;
	case 30:
		activateEntertainerBuff((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 31:
		resp->insertLong(getInstrument((CreatureObject*) inv->getObjectParameter())->_getObjectID());
		break;
	case 32:
		addWatcher((CreatureObject*) inv->getObjectParameter());
		break;
	case 33:
		addListener((CreatureObject*) inv->getObjectParameter());
		break;
	case 34:
		resp->insertBoolean(isDancing());
		break;
	case 35:
		resp->insertBoolean(isPlayingMusic());
		break;
	case 36:
		resp->insertBoolean(isAcceptingBandFlourishes());
		break;
	case 37:
		setAcceptingBandFlourishes(inv->getBooleanParameter());
		break;
	case 38:
		removeWatcher((CreatureObject*) inv->getObjectParameter());
		break;
	case 39:
		removeListener((CreatureObject*) inv->getObjectParameter());
		break;
	case 40:
		setPerformanceName(inv->getAsciiParameter(_param0_setPerformanceName__String_));
		break;
	case 41:
		setDancing(inv->getBooleanParameter());
		break;
	case 42:
		setTargetInstrument(inv->getBooleanParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void EntertainingSessionAdapter::doEntertainerPatronEffects() {
	((EntertainingSessionImplementation*) impl)->doEntertainerPatronEffects();
}

void EntertainingSessionAdapter::doPerformanceAction() {
	((EntertainingSessionImplementation*) impl)->doPerformanceAction();
}

void EntertainingSessionAdapter::addEntertainerFlourishBuff() {
	((EntertainingSessionImplementation*) impl)->addEntertainerFlourishBuff();
}

void EntertainingSessionAdapter::startDancing(const String& dance, const String& animation) {
	((EntertainingSessionImplementation*) impl)->startDancing(dance, animation);
}

void EntertainingSessionAdapter::startPlayingMusic(const String& song, const String& instrumentAnimation, int instrid) {
	((EntertainingSessionImplementation*) impl)->startPlayingMusic(song, instrumentAnimation, instrid);
}

void EntertainingSessionAdapter::startEntertaining() {
	((EntertainingSessionImplementation*) impl)->startEntertaining();
}

void EntertainingSessionAdapter::finalize() {
	((EntertainingSessionImplementation*) impl)->finalize();
}

void EntertainingSessionAdapter::healWounds(CreatureObject* creature, float woundHeal, float shockHeal) {
	((EntertainingSessionImplementation*) impl)->healWounds(creature, woundHeal, shockHeal);
}

bool EntertainingSessionAdapter::isInEntertainingBuilding(CreatureObject* creature) {
	return ((EntertainingSessionImplementation*) impl)->isInEntertainingBuilding(creature);
}

void EntertainingSessionAdapter::doFlourish(int flourishNumber) {
	((EntertainingSessionImplementation*) impl)->doFlourish(flourishNumber);
}

bool EntertainingSessionAdapter::canGiveEntertainBuff() {
	return ((EntertainingSessionImplementation*) impl)->canGiveEntertainBuff();
}

void EntertainingSessionAdapter::addFlourishXp(int xp) {
	((EntertainingSessionImplementation*) impl)->addFlourishXp(xp);
}

void EntertainingSessionAdapter::addHealingXp(int xp) {
	((EntertainingSessionImplementation*) impl)->addHealingXp(xp);
}

int EntertainingSessionAdapter::initializeSession() {
	return ((EntertainingSessionImplementation*) impl)->initializeSession();
}

int EntertainingSessionAdapter::cancelSession() {
	return ((EntertainingSessionImplementation*) impl)->cancelSession();
}

int EntertainingSessionAdapter::clearSession() {
	return ((EntertainingSessionImplementation*) impl)->clearSession();
}

void EntertainingSessionAdapter::stopPlayingMusic() {
	((EntertainingSessionImplementation*) impl)->stopPlayingMusic();
}

void EntertainingSessionAdapter::stopDancing() {
	((EntertainingSessionImplementation*) impl)->stopDancing();
}

void EntertainingSessionAdapter::activateAction() {
	((EntertainingSessionImplementation*) impl)->activateAction();
}

void EntertainingSessionAdapter::startTickTask() {
	((EntertainingSessionImplementation*) impl)->startTickTask();
}

int EntertainingSessionAdapter::getEntertainerBuffStrength(CreatureObject* creature, int performanceType) {
	return ((EntertainingSessionImplementation*) impl)->getEntertainerBuffStrength(creature, performanceType);
}

int EntertainingSessionAdapter::getEntertainerBuffDuration(CreatureObject* creature, int performanceType) {
	return ((EntertainingSessionImplementation*) impl)->getEntertainerBuffDuration(creature, performanceType);
}

void EntertainingSessionAdapter::sendEntertainingUpdate(CreatureObject* creature, float entval, const String& performance, unsigned int perfcntr, int instrid) {
	((EntertainingSessionImplementation*) impl)->sendEntertainingUpdate(creature, entval, performance, perfcntr, instrid);
}

void EntertainingSessionAdapter::sendEntertainmentUpdate(CreatureObject* creature, unsigned long long entid, const String& mood, bool updateEntValue) {
	((EntertainingSessionImplementation*) impl)->sendEntertainmentUpdate(creature, entid, mood, updateEntValue);
}

void EntertainingSessionAdapter::activateEntertainerBuff(CreatureObject* creature, int performanceType) {
	((EntertainingSessionImplementation*) impl)->activateEntertainerBuff(creature, performanceType);
}

Instrument* EntertainingSessionAdapter::getInstrument(CreatureObject* creature) {
	return ((EntertainingSessionImplementation*) impl)->getInstrument(creature);
}

void EntertainingSessionAdapter::addWatcher(CreatureObject* creature) {
	((EntertainingSessionImplementation*) impl)->addWatcher(creature);
}

void EntertainingSessionAdapter::addListener(CreatureObject* listener) {
	((EntertainingSessionImplementation*) impl)->addListener(listener);
}

bool EntertainingSessionAdapter::isDancing() {
	return ((EntertainingSessionImplementation*) impl)->isDancing();
}

bool EntertainingSessionAdapter::isPlayingMusic() {
	return ((EntertainingSessionImplementation*) impl)->isPlayingMusic();
}

bool EntertainingSessionAdapter::isAcceptingBandFlourishes() {
	return ((EntertainingSessionImplementation*) impl)->isAcceptingBandFlourishes();
}

void EntertainingSessionAdapter::setAcceptingBandFlourishes(bool val) {
	((EntertainingSessionImplementation*) impl)->setAcceptingBandFlourishes(val);
}

void EntertainingSessionAdapter::removeWatcher(CreatureObject* creature) {
	((EntertainingSessionImplementation*) impl)->removeWatcher(creature);
}

void EntertainingSessionAdapter::removeListener(CreatureObject* creature) {
	((EntertainingSessionImplementation*) impl)->removeListener(creature);
}

void EntertainingSessionAdapter::setPerformanceName(const String& name) {
	((EntertainingSessionImplementation*) impl)->setPerformanceName(name);
}

void EntertainingSessionAdapter::setDancing(bool val) {
	((EntertainingSessionImplementation*) impl)->setDancing(val);
}

void EntertainingSessionAdapter::setTargetInstrument(bool var) {
	((EntertainingSessionImplementation*) impl)->setTargetInstrument(var);
}

/*
 *	EntertainingSessionHelper
 */

EntertainingSessionHelper* EntertainingSessionHelper::staticInitializer = EntertainingSessionHelper::instance();

EntertainingSessionHelper::EntertainingSessionHelper() {
	className = "EntertainingSession";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void EntertainingSessionHelper::finalizeHelper() {
	EntertainingSessionHelper::finalize();
}

DistributedObject* EntertainingSessionHelper::instantiateObject() {
	return new EntertainingSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* EntertainingSessionHelper::instantiateServant() {
	return new EntertainingSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* EntertainingSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new EntertainingSessionAdapter((EntertainingSessionImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

