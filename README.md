# RootMotionTest
 
A UE 5.0 Blueprint test project

Task:
Make NPC with root motion animation
1. Game starts, NPC runs towards the player facing forward. Following animations are used: Jog_F_Loop, Jog_L_CIR_Loop, Jog_R_CIR_Loop
2. NPC reaches the player, chooses random point in radius and runs towards it, strafe movement. After reaching this point NPC executes to step 1. Following animations are used: Walk_B, Walk_BL_BkPd_Loop, Walk_BR_BkPd_Loop, Walk_F, Walk_FL_Loop, Walk_FR_Loop, Walk_L, Walk_R.
Do not disable root animations. Avoid turning around at one point.
Player is not static, he can move, run behind obstacles.

## Preview

![](https://github.com/Naify/RootMotionTest/blob/main/Img/rootMotion.gif)

## Made with
UE5, Blueprints, Ai blackboard, custom blackboard tasks, root motion, blendspace animation