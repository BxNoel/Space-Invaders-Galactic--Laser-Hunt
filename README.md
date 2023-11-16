# Space Invaders GalacticLaser Hunt
#### Columbia University Art of Engineering Spring 2026            
Authors: Noel Negron, Robert Pendergrast, Samuel Thomason, Derek Martinez 

## Project Description

Galactic Laser Hunt is an engaging gaming experience that combines C and C++ programming on Arduino hardware. 
Players immerse themselves in an arcade-style challenge, using a laser-pointer-powered "blaster" to shoot beams of light at moving targets. 
These targets, equipped with laser sensors, react when the blaster hits, triggering a motor to knock them down. The player aims at the blaster, emitting 
a laser beam to hit moving targets equipped with sensors. Upon successful hits, the targets react by falling over, triggering the motor. 
An LCD screen displays the player's score in real-time. LED lights illuminate upon each successful hit, adding visual excitement.

### Programming: 
C and C++ programming languages will be utilized to create the game logic, controls, and interactions between 
the player's blaster, targets, sensors, motors, and other electronic components.

```C
//SHIP 2//
seconds = random(1000, 1000); // Delayed for 3 - 10 seconds
int lux2 = analogRead(PHOTORESISTOR_PIN2);
bool ship2Dead  = false;
ship2.write(0);
```

### CAD Design 
Various components of the game, including the targets, blaster, and supporting structures, 
will be designed using 3D modeling software. These models will be used for visualization, prototyping, and possibly for 3D printing physical parts.

![](https://github.com/BxNoel/SpaceInvaders/blob/main/CAD_Design/CAD2.png)

### Electronic Components
1. Laser Diodes: Integrated within the blaster to emit the light beam.
2. Photoresistors: Embedded in the targets to detect when hit by the blaster's light.
3. Servo Motors: Actuating the falling motion of the targets upon detection of the blaster's beam.
4. LED Lights: Installed in tandem with each target, providing visual feedback to the player upon successful hits.

![](https://github.com/BxNoel/SpaceInvaders/blob/main/SpaceInvaders.gif)




