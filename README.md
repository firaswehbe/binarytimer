## Binary Toddler Countdown Machine

My son is a master negotiator, especially around bed time. He asks for 3 more minutes to play, so I will use this as a timer for that (with a side effect of getting him familiar with binary counting). The light bulbs light one after the other in a binary pattern (with 3 seconds delay). When the `63 x 3` seconds are reached (maximum count based on the 6 LEDs I have in the kit), they all flash.

Short-term Todo:

* Make it a countdown (start with all bulbs lit and work down to no lights)
* Add a state variable that makes it flash faster when zero is reached (instead of the standard 3 second delay in every loop)

