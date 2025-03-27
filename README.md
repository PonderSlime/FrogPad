# Frogpad
This is my design for Hack Club's Hackpad Challenge. It features a rotary encoder, 15 switches, and a charming froggy face.
<details>
<summary>

# Details
</summary>
<details>


<summary>

## The PCB
</summary>
The first step in my design was to create the pcb schematic.
This involved choosing what components to use and how they should be wired to each other. Overall, this was the easiest step in the design process, since
I am only using 15 switches and 1 rotary encoder.

The next step was for me to decide on a layout for my board.
I decided to go for an erginomic key layout. The encoder sits conveniently in a spot that could be considered a "nose." The macropad truly became a frog when
I decided that I wanted a unique outline and couldn't quite achieve what I was initally going for. During the case design, I was forced to relocate the SeeedStudio
XIAO RP2040 several times, to allow it to plug in better. I also modified the through-hole sizes several times for a similar reason: I needed the case to stay together.

I made many mistakes on the way of my project, and several times had to completely rebuild my case design. Although I encountered many setbacks, 
I still continued on. The hardest thing with designing the pcb was when I was forced to completely restart on the wire traces due to a slight layout change.
![frogpad PCB](https://cloud-bz864wfq9-hack-club-bot.vercel.app/0screenshot_from_2024-10-11_14-45-04.png)

</details>
<details>
<summary>

## The Case

</summary>
For this step I decided to use Onshape. Since this was my first time using Onshape, this took longer than i had hoped for. Luckily, after learning the basics, it was pretty easy to design my case to fit my board. I'm really happy with how it turned out.
</details>
<details>
<summary>

## The Firmware
</summary>
In the past, i have mainly used python for my hardware projects (the only one to date being for bin.) However, in my mind, this project is more like professional design. Since this was the case, I decided to use a dedicated keyboard firmware tool: QMK. I struggled a lot on this step, since i couldn't immediatly find a good firmware base for the RP2040. In the end, I was able to finish the firmware succesfully, with support for the encoder and all 15 keys.
</details>
<details>
<summary>

## In Retrospect
</summary>

During the time spent designing my macropad, I learned more about how to use Kicad, Onshape and QMK. All of these tools were hard in there own way.

Kicad was difficult for me due to the unique board outline and drill hole sizes.

Onshape was tricky because it was my first time using 3D cad software other than Blender.

OMK was especially difficult due to lack of information on using a RP2040 microcontroller.# PonderSime-Hackpad
</details>

</details>

# Keymaps
### Layer 0
| ______ | Space | TO(2) | ______ | ______ |
| ------ | ------ | ------  | ------| ------| 
| Q | W | E | R | T |
| A | S | D | F | G |
| Z | X | C | V | TD(0) |

### Layer 1
| ______ | Space | TO(2) | ______ | ______ |
| ------ | ------ | ------  | ------| ------| 
| Y | U | I | O | P |
| H | J | K | L | . |
| B | N | M | , |  |

### Layer 2
| ______ | TO(0) | TO(3) | ______ | ______ |
| ------ | ------ | ------  | ------| ------| 
| TD(2) | TD(3) | TD(4) | TD(5) | TD(6) |
| TD(7) | TD(8) | TD(9) | TD(10) | TD(11) |
| Left | Up | Down | Right | TD(1) |

### Layer 3
| ______ | TO(2) | Space | ______ | ______ |
| ------ | ------ | ------  | ------| ------| 
| F1 | F2 | F3 | F4 | F5 |
| F6 | F7 | F8 | F9 | F10 |
| F11 | F12 | Esc | Tab |  |

## Tap-Dance Info
| Which One | On Tap | On Hold | Double Tap | Tap and Hold |
| ------ | ------ | ------ | ------ | ------ |
| 0 | Space | MO(1) | Enter | Bksp | 
| 1 | Space | MO(3) | Enter | Bksp | 
| 2 | 1 |  | 6 |  | 
| 3 | 2 |  | 7 |  | 
| 4 | 3 |  | 8 |  | 
| 5 | 4 |  | 9 |  | 
| 6 | 5 |  | 0 |  | 
| 7 | - |  | = |  | 
| 8 | ' |  | ` |  | 
| 9 | [ |  | ] |  | 
| 10 | Esc |  | / |  | 
| 11 | \ |  | Caps |  | 
