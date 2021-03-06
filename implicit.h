#ifndef IMPLICIT_H
#define IMPLICIT_H

//#include <stdlib.h>
#include "localFunctions.h"

#include "fvCFD.H"
//#include "fvOptions.H"

void implicit(const volScalarField& C, Time& runTime, const fvMesh& mesh, dimensionedScalar dtau,const volScalarField& PsiZero, volScalarField& Psi,
           volScalarField& T, volScalarField& Told, const dimensionedScalar& epsH, const double& eps, const bool& limitFieldT, const int& ilkrcz, double gamma, int ilePkt, const double gradPsiLimit);


#endif // IMPLICIT_H
