using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Characters
{
	class Rouge : CommonCharacter
	{
		//Fields 
		private int stabbingAbility;
		private int stealth;

		//Properties 
		public int Stealth { get { return stealth; } }
		public int StabbingAbility { get { return stabbingAbility; } }

		// Default Constructor
		public Rouge()
		{
            name = "Sothe";
            health = 57;
			speed = 5;
			strength = 2;
			armor = 10;
			stabbingAbility = 4;
			stealth = 8;
		}

		// Parameterized Constructor
		public Rouge(string name, int health, int speed, int strength, int armor, int stabbingAbility, int stealth)
		{
            this.name = name;
            this.health = health;
			this.randNum = randNum;
			this.speed = speed;
			this.strength = strength;
			this.armor = armor;
			this.stabbingAbility = stabbingAbility;
			this.stealth = stealth;
		}

		// Method to print health
		public override string Print()
		{
			Console.WriteLine(name);
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
			return (name + " the Rouge has " + health + " health " + speed +
				" speed, and " + strength +
				" strength. Along with " + armor +
				" armor, " + stabbingAbility +
				" stabbing ability and " + stealth + " stealth.");
		}

		// This method is used for the attackng phase
		public override int Attack()
		{
			randNum = rng.Next(0, strength);
			int attack = ((randNum * stabbingAbility));


			return attack;
		}

		//Method to calculate damage
		public override void TakeDamage(int damage)
		{
			int chance = rng.Next(0, stealth);
			if (chance > (stealth - 1))
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

			Console.Write( name + " has taken " + damage + " damage from ");
		}
		// Method to tell if Rouge has fled
		public override bool HasFled()
		{
			bool flee;
			if (health == 10)
			{
				flee = true;
			}
			else
			{
				flee = false;
			}

			return flee;
		}

		//Method to tell if ROuge has died
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
