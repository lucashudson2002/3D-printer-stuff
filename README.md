# Ender 3 - Oppenheimer - Marlin - Klipper

My settings for Marlin and Klipper in my 3D printer I built from scratch, which I called Oppenheimer, and the list of materials I used to build it.

First, my configurations for Marlin, which I don't use anymore, forked from [here](https://github.com/MarlinFirmware/Marlin/tree/bugfix-2.1.x).

Then, my configurations for Klipper, which I am using now with a [BTT PI V1.2](https://pt.aliexpress.com/item/1005006045269463.html?spm=a2g0o.order_list.order_list_main.65.5fb6caa42MGo21&gatewayAdapt=glo2bra) and a [BTT TFT35 SPI V2.1](https://pt.aliexpress.com/item/1005005114935485.html?spm=a2g0o.order_list.order_list_main.41.5fb6caa42MGo21&gatewayAdapt=glo2bra).

Based on the Creality Ender 3, my first printer, which I modified and called [Barbie](https://github.com/lucashudson2002/3D-printer-stuff/tree/barbie).

## Purchased parts:

- [Bracket Motor Y Axis (Kit A)](https://pt.aliexpress.com/item/1005005540682002.html?spm=a2g0o.order_list.order_list_main.10.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Sprite Pro (Extruder/Hotend)](https://pt.aliexpress.com/item/1005005048345778.html?spm=a2g0o.order_list.order_list_main.143.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Sprite Board](https://pt.aliexpress.com/item/1005006304899000.html?spm=a2g0o.order_list.order_list_main.15.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Pés Anti-Vibração](https://pt.aliexpress.com/item/1005006127851094.html?spm=a2g0o.order_list.order_list_main.20.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Motor X/Y Heatsink](https://pt.aliexpress.com/item/32624104352.html?spm=a2g0o.order_list.order_list_main.47.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [PEI/PEY-stars Magnetic Build Plate](https://pt.aliexpress.com/item/1005005939398883.html?spm=a2g0o.order_list.order_list_main.77.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [CR-Touch](https://pt.aliexpress.com/item/1005006146076095.html?spm=a2g0o.order_list.order_list_main.83.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Belt tensioner X Axis](https://pt.aliexpress.com/item/1005005911940857.html?spm=a2g0o.order_list.order_list_main.189.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Belt tensioner Y Axis](https://pt.aliexpress.com/item/4000253369657.html?spm=a2g0o.order_list.order_list_main.89.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [White Led Strip 24V](https://pt.aliexpress.com/item/1005002355317307.html?spm=a2g0o.order_list.order_list_main.137.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Sprite Carriage and Cable](https://pt.aliexpress.com/item/1005005683312294.html?spm=a2g0o.order_list.order_list_main.131.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [X/Y/Z Motor 42-34](https://pt.aliexpress.com/item/1005004836346666.html?spm=a2g0o.order_detail.order_detail_item.3.2be24c7fpcjMsd&gatewayAdapt=glo2bra)
- [Trapezoidal Spindle 600mm](https://pt.aliexpress.com/item/32508796504.html?spm=a2g0o.order_list.order_list_main.161.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Flexible Z Axis Coupler 5x8](https://pt.aliexpress.com/item/1005005891325006.html?spm=a2g0o.order_list.order_list_main.184.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Spool Holder](https://pt.aliexpress.com/item/1005003238841332.html?spm=a2g0o.order_list.order_list_main.166.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Endstop](https://pt.aliexpress.com/item/1005003185448708.html?spm=a2g0o.order_list.order_list_main.167.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Isolation Blanket for Heated Bed](https://pt.aliexpress.com/item/4000723996544.html?spm=a2g0o.order_list.order_list_main.194.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Timing Belt 2GT-6mm](https://pt.aliexpress.com/item/1005003595968608.html?spm=a2g0o.order_list.order_list_main.219.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [PSU Switch](https://pt.aliexpress.com/item/32895688982.html?spm=a2g0o.order_list.order_list_main.224.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Belt gear for stepper motor 20 Tooth 5mm](https://pt.aliexpress.com/item/1005003693756433.html?spm=a2g0o.order_list.order_list_main.234.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Hetead Bed 310x310](https://pt.aliexpress.com/item/1005001802078490.html?spm=a2g0o.order_list.order_list_main.244.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Carriage Y Axis 310x310](https://pt.aliexpress.com/item/1005003181860184.html?spm=a2g0o.order_list.order_list_main.259.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [PSU 24V 15A](https://pt.aliexpress.com/item/1005005553964246.html?spm=a2g0o.order_list.order_list_main.264.5fb6caa42MGo21&gatewayAdapt=glo2bra)
- [Carriage Dual Z Axis](https://pt.aliexpress.com/item/1005004359952199.html?spm=a2g0o.productlist.main.27.12263d30FjozOm&algo_pvid=6c1a663c-9de5-445d-b15c-562c1169f401&algo_exp_id=6c1a663c-9de5-445d-b15c-562c1169f401-13&pdp_npi=4%40dis%21BRL%21174.45%2192.48%21%21%2133.52%2117.77%21%402101fb0c17084392391034198e7d15%2112000028902645263%21sea%21BR%212609103932%21&curPageLogUid=tOBMhG0aYxgH&utparam-url=scene%3Asearch%7Cquery_from%3A)
- [Screws and Nuts](https://www.aliexpress.com/store/911735104?spm=a2g0o.order_list.order_list_main.139.7db6caa4PffwkO)
- [Silicon Spacers Bed](https://produto.mercadolivre.com.br/MLB-2906546307-04-espacadores-de-silicone-niveladores-mesa-impressora-3d-_JM)

## Printed parts:

- [Bracket Endstop X/Y Axis](https://www.thingiverse.com/thing:6387151)
- [Bed Handle](https://www.thingiverse.com/thing:6462220)
- [3D Printer Holder](https://www.thingiverse.com/thing:6382974)
- [Motherboard Case]()
- [Motherboard Fan Cover](https://www.thingiverse.com/thing:2935204)
- [Bomb QRCode Cover](https://www.thingiverse.com/thing:6387174)
- [Sprite Board Spacer](https://www.thingiverse.com/thing:6462252)
- [Light Bar](https://www.thingiverse.com/thing:5376731)
- [Display LCD Bracket](https://www.thingiverse.com/thing:6494882)
- [PSU Case]()
- [PSU Bracket]()
- [Display Knob](https://www.thingiverse.com/thing:4899912)
- [Bracket Motor Z Axis](https://www.printables.com/model/426142-ender-3-s1-s1-pro-reinforced-bracket-z-axis-motor/files)

## Parts I Already Owned:

- Creality Motherboard V4.2.2

- Creality Hand Twist Leveling Nut

- Creality Ender 3 Display
