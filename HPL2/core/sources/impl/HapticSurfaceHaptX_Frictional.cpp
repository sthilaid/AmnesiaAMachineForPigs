/*
 * Copyright © 2011-2020 Frictional Games
 * 
 * This file is part of Amnesia: A Machine For Pigs.
 * 
 * Amnesia: A Machine For Pigs is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version. 

 * Amnesia: A Machine For Pigs is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Amnesia: A Machine For Pigs.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "impl/HapticSurfaceHaptX_Frictional.h"

#include "system/LowLevelSystem.h"

namespace hpl {

	using namespace HaptX;
	using namespace Vectors;

	//////////////////////////////////////////////////////////////////////////
	// CONSTRUCTORS
	//////////////////////////////////////////////////////////////////////////

	//-----------------------------------------------------------------------

	cHapticSurfaceHaptX_Frictional::cHapticSurfaceHaptX_Frictional(const tString &asName,HaptX::HaptXInterface *apInterface,
															float afDamping, float afStiffness,
															float afDynamicFriction, float afStartingFriction,
															float afTangentStiffness, float afStoppingFriction)
		: iHapticSurfaceHaptX(asName, eHapticSurfaceType_Frictional, apInterface)
	{
		mpInterface->SurfaceCreateFrictional(&mpFrictionalSurfaceInfo);
		mpSurfaceInfo = mpFrictionalSurfaceInfo;

		mpFrictionalSurfaceInfo->SetDamping(afDamping);
		mpFrictionalSurfaceInfo->SetStiffness(afStiffness);

		mpFrictionalSurfaceInfo->SetDynamicFriction(afDynamicFriction);
		mpFrictionalSurfaceInfo->SetStartingFriction(afStartingFriction);
		mpFrictionalSurfaceInfo->SetStiffnessT(afTangentStiffness);
		mpFrictionalSurfaceInfo->SetStoppingFriction(afStoppingFriction);
	}

	//-----------------------------------------------------------------------

	cHapticSurfaceHaptX_Frictional::~cHapticSurfaceHaptX_Frictional()
	{
	}

	//-----------------------------------------------------------------------

	//////////////////////////////////////////////////////////////////////////
	// PUBLIC METHODS
	//////////////////////////////////////////////////////////////////////////

	//-----------------------------------------------------------------------
	
	//-----------------------------------------------------------------------

}
