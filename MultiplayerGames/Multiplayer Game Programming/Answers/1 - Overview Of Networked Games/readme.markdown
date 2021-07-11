![img.png](questions.png)

**1. In "local multiplayer" is possible playing in a group only a single session of one machine
   and "networked multiplayer" is possible each person can play each machine remotely.**
   
**Scenario**

_`"local multiplayer"`_

![local.png](local.png)

_`"networked multiplayer"`_
![networked.png](networked.png)


**2. These are available networks.**

![networks.png](networks.png)


**3. The major consideration is latency.**

**4. A multi-user dungeon or MUD is a (usually text-based) style of multiplayer game where
 several players are connected to the same virtual world at once. This type of game first gained
 popularity on mainframes at major universities, and the term originates from the game MUD
 (1978), which was created by Rob Trushaw at Essex University. In some ways, MUDs can be
 thought of as an early computer version of the role-playing game Dungeons and Dragons ,
 though not all MUDs are necessarily role-playing games.**

![mud.png](mud.jpg)


**5. In a Massively
Multiplayer Online Game (MMO), however, hundreds if not thousands of players can participate
in a single game session. The key big quantity of player in a session.**

**6. Event Manager, Ghost Manager and Move Manager.**

**7. Regardless of how the set of relevant objects is computed, the job of the ghost manager is to
transmit object state from server to client for as many relevant objects as possible. It’s very
important that the ghost manager guarantees that the most recent data is always successfully
transmitted to all of the clients. The reason for this is that the game object information that is
ghosted will often contain information such as health, weapons, ammo count, and so on—all
cases where the most recent data is the only information that matters.
When an object becomes relevant (or “in scope”), the ghost manager will assign some
information to the object, which is appropriately called a ghost record . This record will include
items such as a unique ID, a state mask, the priority, and status change (whether or not the
object has been marked as in or out of scope)**

**8. Synchronization commands to all players connect utilizing topology peer-to-peer model.
all the commands for that player’s turn are transmitted over the network to all
other players**
