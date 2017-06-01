#ifndef DAMICDetectorOutterLead_h
#define DAMICDetectorOutterLead_h


#include "globals.hh"
class G4LogicalVolume;


G4LogicalVolume* GetConstructionCornerLead();
G4LogicalVolume* GetConstructionRestraintBlocks();
G4LogicalVolume* GetConstructionRestraintSheet();
G4LogicalVolume* GetConstructionAssembly1();
G4LogicalVolume* GetConstructionAssembly2();
G4LogicalVolume* GetConstructionVesselandOutter();
G4LogicalVolume* GetConstructionShieldingLead();
G4LogicalVolume* GetConstructionLeadCastleFrame();
G4LogicalVolume* GetConstructionPartLeadCastle();



#endif
