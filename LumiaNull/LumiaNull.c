#include <ntddk.h>
#include <wdf.h>


DRIVER_INITIALIZE DriverEntry;
EVT_WDF_DRIVER_DEVICE_ADD KmdfNullDevicAdd;


NTSTATUS
DriverEntry(
	_In_ PDRIVER_OBJECT     DriverObject,
	_In_ PUNICODE_STRING    RegistryPath
)
{
	// NTSTATUS variable to record success or failure
	NTSTATUS status = STATUS_SUCCESS;

	// Allocate the driver configuration object
	WDF_DRIVER_CONFIG config;

	// Initialize the driver configuration object to register the
	// entry point for the EvtDeviceAdd callback, KmdfHelloWorldEvtDeviceAdd
	WDF_DRIVER_CONFIG_INIT(&config,
		KmdfNullDevicAdd
	);

	// Finally, create the driver object
	status = WdfDriverCreate(DriverObject,
		RegistryPath,
		WDF_NO_OBJECT_ATTRIBUTES,
		&config,
		WDF_NO_HANDLE
	);
	return status;
}


NTSTATUS
KmdfNullDevicAdd(
	_In_    WDFDRIVER       Driver,
	_Inout_ PWDFDEVICE_INIT DeviceInit
)
{
	// We're not using the driver object,
	// so we need to mark it as unreferenced
	UNREFERENCED_PARAMETER(Driver);

	NTSTATUS status;

	// Allocate the device object
	WDFDEVICE hDevice;

	// Create the device object
	status = WdfDeviceCreate(&DeviceInit,
		WDF_NO_OBJECT_ATTRIBUTES,
		&hDevice
	);
	return status;
}