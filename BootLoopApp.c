#include <Uefi.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/UefiBootServicesTableLib.h>
EFI_STATUS
EFIAPI 
UefiMain(
	IN EFI_HANDLE ImageHandle,
	IN EFI_SYSTEM_TABLE *SystemTable
	)
{
	gBS->Stall (3 * 1000 * 1000);
	gRT->ResetSystem (EfiResetCold, EFI_SUCCESS, 0, NULL);

	return EFI_SUCCESS;
}
