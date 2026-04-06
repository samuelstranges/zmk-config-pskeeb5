# Build & Flash Guide

## Building Firmware

Firmware builds automatically via GitHub Actions on every push.

### 1. Make your changes

Edit files in `config/` — the keymap, Miryoku config, or mapping.

| File | Purpose |
|------|---------|
| `config/pskeeb5.keymap` | Main keymap entry point, encoder bindings, combos |
| `config/miryoku/custom_config.h` | Layout options: alphas, nav style, clipboard, layer overrides |
| `config/miryoku/mapping/38/pskeeb5.h` | Physical key mapping (outer thumb assignments) |

### 2. Push to GitHub

```sh
git add -A
git commit -m "your change description"
git push
```

### 3. Download firmware

Go to the [Actions tab](../../actions) and click the latest successful run. Download the **firmware** artifact — it contains three `.uf2` files:

| File | Purpose |
|------|---------|
| `pskeeb5_left-nice_nano_v2-zmk.uf2` | Left half firmware |
| `pskeeb5_right-nice_nano_v2-zmk.uf2` | Right half firmware |
| `settings_reset-nice_nano_v2-zmk.uf2` | Clears all stored settings (BT pairings, etc.) |

Or download via CLI:

```sh
gh run download -R samuelstranges/zmk-config-pskeeb5 -n firmware -D firmware
```

## Flashing

Repeat for each half (left, then right):

1. Connect the half via USB
2. **Double-tap the reset button** on the nice!nano — it enters bootloader and mounts as `NICENANO`
3. Copy the matching `.uf2` file to the drive:

```sh
# Left half
cp firmware/pskeeb5_left-nice_nano_v2-zmk.uf2 /Volumes/NICENANO/

# Right half
cp firmware/pskeeb5_right-nice_nano_v2-zmk.uf2 /Volumes/NICENANO/
```

4. The drive unmounts automatically when flashing completes

## Pairing

### Halves to each other

Automatic — both halves pair over BLE when powered on.

### Keyboard to your Mac

1. Power on both halves
2. Open **System Settings > Bluetooth**
3. The keyboard appears as a discoverable device — click **Connect**

### Switching BT profiles

Hold **ESC** (left inner thumb) to activate the MEDIA layer, then tap a BT key on the bottom-right row:

```
BT 0  |  BT 1  |  BT 2  |  BT 3  |  OUT TOG
```

- **Tap** = select profile
- **Shift + Tap** = select and clear profile (for re-pairing)
- **OUT TOG** = toggle between Bluetooth and USB

## Troubleshooting

### Keyboard not pairing

1. Flash `settings_reset-nice_nano_v2-zmk.uf2` to both halves
2. Re-flash the normal firmware to both halves
3. Try pairing again

### Halves not communicating

1. Power cycle both halves (toggle power switches)
2. If persistent, flash settings reset to both, then re-flash firmware

### Trackpoint not working

The trackpoint is on the right half. Ensure:
- The right half firmware (`pskeeb5_right`) is flashed (it includes the PS/2 driver)
- The trackpoint cable is properly seated

Adjust sensitivity from the MOUSE layer (hold TAB on base):
- Bottom row, right hand: **TP S-** and **TP S+**

## Project Structure

```
config/
  pskeeb5.keymap              # Keymap entry point
  miryoku/
    custom_config.h           # Layout customization
    mapping/38/pskeeb5.h      # Physical layout mapping
    miryoku.dtsi              # Miryoku core (do not edit)
    miryoku.h                 # Miryoku core (do not edit)
    miryoku_babel/            # Layer definitions (do not edit)
    miryoku_behaviors.dtsi    # Hold-tap behaviors (do not edit)
    miryoku_mousekeys.dtsi    # Mouse key config (do not edit)
    ...
  west.yml                    # Points to klesh/zmk fork (trackpoint support)
build.yaml                    # GitHub Actions build matrix
KEYMAP.md                     # Layer reference (ASCII art)
keymap.html                   # Interactive layer visualizer
```
