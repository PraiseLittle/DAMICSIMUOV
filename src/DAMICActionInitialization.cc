#include "DAMICActionInitialization.hh"

#include "DAMICPrimaryGeneratorAction.hh"
#include "DAMICRunAction.hh"
#include "DAMICEventAction.hh"
#include "DAMICSteppingAction.hh"
#include "DAMICStackingAction.hh"
#include "DAMICTrackingAction.hh"

DAMICActionInitialization::DAMICActionInitialization(DAMICDetectorConstruction* detector)
: G4VUserActionInitialization(),
fDetector(detector)
{

}

DAMICActionInitialization::~DAMICActionInitialization()
{}

void DAMICActionInitialization::BuildForMaster() const
{}

void DAMICActionInitialization::Build() const
{

  DAMICPrimaryGeneratorAction* primary = new DAMICPrimaryGeneratorAction();
  SetUserAction(primary);
  DAMICRunAction* runAction = new DAMICRunAction();
  SetUserAction(runAction);

  DAMICEventAction* eventAction = new DAMICEventAction(runAction);
  SetUserAction(eventAction);
  DAMICSteppingAction* steppingAction = new DAMICSteppingAction(eventAction);
  SetUserAction(steppingAction);
  DAMICStackingAction* stackingAction = new DAMICStackingAction();
  SetUserAction(stackingAction);
  DAMICTrackingAction* trackingAction = new DAMICTrackingAction();
  SetUserAction(trackingAction);
}
