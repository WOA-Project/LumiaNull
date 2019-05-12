# LumiaNull
Common nulled devices for Lumia devices

This driver is meant to be either cosmetic or practical, we install a dummy drivers to common lumia devices we got no driver for, for cosmetic sake or to actually fix a dependency issue.
Currently the driver doesn't unload properly, that's something to do.

Current devices we null:

| Device Description                           | Device ID                                         |
|----------------------------------------------|---------------------------------------------------|
| Touch Driver Test Interface Device           | {1ED875DA-D851-42BE-9DFD-527D97178147}\TOUCH_TEST |
| Touch Driver Test Interface Device           | {1ed875da-d851-42be-9dfd-527d97178147}\Touch_Test |
| Touch Driver Interface Device                | {3A0AC59A-4D8A-4875-B7EA-304771FF9B9A}\NOKIATOUCH |
| Touch Driver Interface Device                | {3a0ac59a-4d8a-4875-b7ea-304771ff9b9a}\NokiaTouch |
| HDMI to Displayport driver                   | ACPI\MSHW1007                                     |
| Qualcomm GPU device                          | ACPI\QCOM_GPU                                     |
| Nokia ATTS device                            | ACPI\NOKIA_ATTS                                   |
| Nokia Care Diagnostics ODDT Register Device  | ACPI\ODDT_REG                                     |
| Nokia Care Diagnostics ODDT Vibration Device | ACPI\ODDT_VIB                                     |
| Nokia Care Diagnostics ODDT CPU Device       | ACPI\ODDT_CPU                                     |
| Nokia Care Diagnostics ENO GPIO Device       | ACPI\ENOGPIO                                      |
| Nokia Care Diagnostics ENO EM Device         | ACPI\NOKIA_ENOEM                                  |
| Nokia Windows Phone Crasher Device           | ACPI\WP_CRASHER                                   |
| Touch Panel Power Stub Device                | ACPI\MSHW1024                                     |
| mmo security driver                          | ACPI\MSHW1001                                     |
| Origa2Auth Device                            | ACPI\MSHW1002                                     |
| ice5lp_2k Device                             | ACPI\MSHW1006                                     |
| Microsoft Eno gpio Driver                    | ACPI\MSHW1008                                     |
| Type C MUX port driver                       | ACPI\MSHW1009                                     |
| Stub Driver (100C)                           | ACPI\MSHW100C                                     |
| Stub Driver (100D)                           | ACPI\MSHW100D                                     |
| Icaros Extra Sensory Perception Driver       | ACPI\MSHW1010                                     |
| Icaros_KMD_ESP_Thermal Device                | ACPI\MSHW1011                                     |
| Stub Driver (1014)                           | ACPI\MSHW1014                                     |
| hall_kmd Device                              | ACPI\MSHW1015                                     |
| MMO VisaST Device                            | ACPI\MSHW1019                                     |
| MMO Activity Detection driver                | ACPI\MSHW101C                                     |
| MMO Step Counter driver                      | ACPI\MSHW101D                                     |
| MMO Gesture Recognition driver               | ACPI\MSHW101E                                     |
| Sensor Algorithm Control driver              | ACPI\MSHW101F                                     |
| Activity Driver                              | ACPI\MSHW1020                                     |
| Pedometer Driver                             | ACPI\MSHW1021                                     |