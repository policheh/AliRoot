#ifndef AliGenScan_H
#define AliGenScan_H
/////////////////////////////////////////////////////////
//  Manager and hits classes for set:MUON version 0    //
/////////////////////////////////////////////////////////
#include "AliGenerator.h"
#include "TNamed.h"
#include "TF1.h"
#include "TArrayF.h"
#include "TTree.h"

// Read background particles from a FLUKA boundary source file

class AliGenScan : public AliGenerator
{
 
protected:
    Float_t fXmin;
    Float_t fXmax;
    Int_t   fNx;
    Float_t fYmin;
    Float_t fYmax;
    Int_t   fNy;
    Float_t fZmin;
    Float_t fZmax;
    Int_t   fNz;
    Int_t fIpart; // Particle type
    
public:
   AliGenScan();
   AliGenScan(Int_t npart);
   virtual ~AliGenScan();
   // Set Scanning Range 
   virtual void SetRange(Int_t nx, Float_t xmin, Float_t xmax,
			 Int_t ny, Float_t ymin, Float_t ymax,
			 Int_t nz, Float_t zmin, Float_t zmax);
   
   // Initialise 
   virtual void Init() {}
   // generate event
   virtual void Generate();
   virtual void SetPart(Int_t part) {fIpart=part;}   
   
  ClassDef(AliGenScan,1) //Boundary source
};
#endif






