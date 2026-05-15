# STM32 GPIO Driver Assignment
## STM32F446RE – Nucleo Board

This assignment demonstrates integration of a custom GPIO driver with STM32 hardware using only driver APIs (no direct register access).



 📌 Task 1: Button-Controlled LED Toggle

## Objective
Configure the onboard user button to toggle the onboard LED.

## Pin Mapping

| Component        | Port | Pin  |
|------------------|------|------|
| Onboard LED      | GPIOA | PA5 |
| User Button      | GPIOC | PC13 |

## Configuration

### LED (PA5)
- Mode: Output
- Output Type: Push-Pull
- Speed: Fast
- Pull: No Pull

### Button (PC13)
- Mode: Input
- Pull: No Pull
- Active LOW (Pressed = 0)

## Working Logic

- Continuously read button state.
- When button is pressed:
  - Toggle LED.
  - Apply delay for debouncing.
  - Wait until button release.
- LED state persists after release.


 📌 Task 2: Alternating External LED Blink

## Objective
Blink two external LEDs alternately using GPIO driver APIs.

## Pin Mapping

| LED      | Port | Pin |
|----------|------|-----|
| LED1     | GPIOA | PA6 |
| LED2     | GPIOA | PA7 |

## Hardware Wiring

- PA6 → Resistor → LED1 → GND
- PA7 → Resistor → LED2 → GND

(External LEDs connected with current limiting resistors)

## Configuration

Both pins configured as:
- Mode: Output
- Output Type: Push-Pull
- Speed: Fast
- Pull-up/Pull-down: No Pull

## Working Logic

Inside infinite loop:

1. LED1 ON, LED2 OFF
2. Delay (~250ms)
3. LED1 OFF, LED2 ON
4. Delay (~250ms)
5. Repeat continuously

This creates an alternating blinking pattern .

---

# 🧠 GPIO Driver APIs Used

- GPIO_PeriClockControl()
- GPIO_Init()
- GPIO_READFROMINPUTPIN()
- GPIO_TOGGLEOUTPUTPIN()
- GPIO_WRITETOOUTPUTPin()

All GPIO operations are performed using driver APIs only.

---

# ⏳ Delay Implementation

void delay(void)
{
    for(uint32_t i = 0; i < 250000; i++);
}



🎥 Demo Video
Click here to watch the demo
1.BUTTON TOGGLING ONBOARD LED
https://drive.google.com/file/d/17MNNpMjYPDPbpzQfrtisxa-lR4azmmJz/view?usp=drivesdk
2.EXTERNAL LEDs BLINKING ALTERNATELY
https://drive.google.com/file/d/173TFOR3OJdiTotWWzNt-zNqMMhF9dMvt/view?usp=drivesdk

Expected Behavior
✔ Single press toggles LED reliably
✔ No flickering
✔ Two external LEDs blink smoothly in alternating pattern
✔ Clean driver-based implementation

