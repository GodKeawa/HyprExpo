# HyprExpo
HyprExpo is an overview plugin like niri. Forked from hyprland-plugins:hyprexpo as the original plugin is no longer maintained.

Currently supports Hyprland V0.56.0.

https://github.com/user-attachments/assets/c5102f6a-d43c-4c24-8f65-e7308691e8c5

## Usage
Same as normal plugins.

## Features
- Displays workspaces in a horizontal line, similar to Niri.
- Supports scroll wheel to switch workspaces.
- Supports gestures to switch workspaces or windows by left mouse button.
- Supports drag and drop windows to switch workspaces by right mouse button.
- Smooth parting animations when dragging and dropping windows.
- Original border rendering supported(for active or inactive windows)

## Config
A great start to configure this plugin would be adding this code to the `plugin` section of your hyprland configuration file:  
```ini
# .config/hypr/hyprland.conf
    plugin = {
        hyprexpo = {
            scroll_moves_up_down = 1,
            follow_mouse = 1,
            default_zoom = 0.5,
            gesture_distance = 300,
        },
    },
```

### Properties

| property                       | type                       | description                                                                                                                                | default          |
| ------------------------------ | -------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------ | ---------------- |
| scroll_moves_up_down | integer                    | `1` means scroll wheel moves workplaces vertically, `0` zooming                                                                            | `1`              |
| follow_mouse         | integer                    | `1` means focus follows mouse, `0` don't                                                                                                   | `1`              |
| default_zoom         | float                      | the zoom scale for windows in scroll layout                                                                                                | `0.5`            |
| gesture_distance          | number                     | how far is the max for the gesture                                                                                                         | `200`            |

### Keywords

| name             | description                                                   | arguments       |
| ---------------- | ------------------------------------------------------------- | --------------- |
| hyprexpo-gesture | same as gesture, but for hyprexpo gestures. Supports: `expo`. | Same as gesture |

### Binding
Example:  
```lua
hl.bind("SUPER + g", function()
    hl.plugin.hyprexpo.expo("toggle")
end)
```

Here are a list of options you can use:  
| option  | description                                                     |
| ------- | --------------------------------------------------------------- |
| toggle  | displays if hidden, hide if displayed                           |
| select  | selects the hovered desktop                                     |
| bring   | brings a window from the hovered desktop to the current desktop |
| off     | hides the overview                                              |
| disable | same as `off`                                                   |
| on      | displays the overview                                           |
| enable  | same as `on`                                                    |
