#include "RefinedPowerModule.h"
#include "RPTurbineBaseActor.h"
#include "../SML/mod/hooking.h"
#include "FGGameMode.h"
#include <fstream>

void FRefinedPowerModule::StartupModule() {
	/*SUBSCRIBE_METHOD("?InitGameState@AFGGameMode@@UEAAXXZ", AFGGameMode::InitGameState, [](CallResult<void>&, AFGGameMode* gameMode) {
		AExampleActor* actor = gameMode->GetWorld()->SpawnActor<AExampleActor>(FVector::ZeroVector, FRotator::ZeroRotator);
		actor->DoStuff();
	});*/
}

IMPLEMENT_GAME_MODULE(FRefinedPowerModule, RefinedPower);
