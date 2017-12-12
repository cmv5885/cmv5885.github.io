using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Characters
{
	class Archer : CommonCharacter
	{
		//Fields 
		private int accuracy;
		private int num_arrows;

		//Properties 
		public int Num_arrows { get { return num_arrows; } }
		public int Accuracy { get { return accuracy; } }

		//Default Constructor
		public Archer()
		{
            name = "Hanzo";
            health = 50;
			speed = 6;
			strength = 5;
			armor = 10;
			accuracy = 4;
			num_arrows = 10;
		}

		// Parameterized Constructor
		public Archer(string name, int health, int speed, int strength, int armor, int accuracy, int num_arrows)
		{
            this.name = name;
            this.health = health;
			this.randNum = rng.Next();
			this.speed = speed;
			this.strength = strength;
			this.armor = armor;
			this.accuracy = accuracy;
			this.num_arrows = num_arrows;
		}

		//This method to print the name
		public override string Print()
		{
			Console.WriteLine( name );
			return name;
		}

		//This method to print the health
		public override string Print_health()
		{
			Console.WriteLine(name + " has " + health + " health left");
			return name;
		}

		//Method to print stats
		public override string ToString()
		{
			return ( name + " the Archer has " + health + " health, " + speed +
				" speed, and " + strength +
				" strength. Along with " + armor +
				" armor, " + accuracy +
				" accuracy and " + num_arrows + " arrows left in their quiver.");
		}

		// The method used for attacking
		public override int Attack()
		{
			randNum = rng.Next(0, strength);
			int attack = ( randNum * accuracy);

			//As the archer attacks he loses an arrow
			num_arrows--;

			//This happens because if he doesn't have arrows then he can't attack like normal
			if (num_arrows == 0)
			{
				attack = 0;
			}

			return attack;
		}
		//method to calculate damage
		public override void TakeDamage(int damage)
		{
			int chance = rng.Next(0, speed);
			if (chance > (speed - 2))
			{
				damage = 0;
				health = health - damage;
			}
			else if (damage >= 0 && damage <= armor)
			{
				damage = armor - damage;
				health = health - damage;
				if (health < 0)
				{
					health = 0;
				}
			}
			else if (damage > armor)
			{
				damage = damage - armor;
				health = health - damage;
				if (health < 0)
				{
					health = 0;
				}
			}

			Console.Write(name + " has taken " + damage + " damage from ");
		}
		//Method to tell if archer has fled
		public override bool HasFled()
		{
			bool flee;
			if (health == 1)
			{
				flee = true;
			}
			else
			{
				flee = false;
			}

			return flee;
		}
		// Method to tell if Archer is dead
		public override bool IsDead()
		{
			bool dead;

			if (health <= 0)
			{
				dead = true;
			}

			else
			{
				dead = false;
			}

			return dead;
		}

	}
}
