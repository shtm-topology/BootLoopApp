#include <Uefi.h>
#include <Library/UefiRuntimeServicesTableLib.h>
EFI_STATUS
EFIAPI 
UefiMain(
	IN EFI_HANDLE ImageHandle,
	IN EFI_SYSTEM_TABLE *SystemTable
	)
{
	gRT->ResetSystem (EfiResetCold, EFI_SUCCESS, 0, NULL);

	return EFI_SUCCESS;
}
