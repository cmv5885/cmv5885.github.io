using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Characters
{
	class Warrior : CommonCharacter
	{
		//Fields 
		private int dex;
		private int weapon_durability;

		//Properties 
		public int Dex { get { return dex; } }
		public int Weapon_durability { get { return weapon_durability; } }

		//Default Constructor
		public Warrior()
		{
			name = "Ike";
			health = 85;
			speed = 10;
			strength = 9;
			armor = 15;
			dex = 4;
			weapon_durability = 13;
		}

		// Parameterized Constructor
		public Warrior(string name, int health, int speed, int strength, int armor, int dex, int weapon_durability)
		{
			this.name = name;
			this.health = health;
			this.randNum = rng.Next();
			this.speed = speed;
			this.strength = strength;
			this.armor = armor;
			this.dex = dex;
			this.weapon_durability = weapon_durability;
		}

		//This method to print the name
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
			return (name + " the Warrior has " + health + " health, " + speed +
				" speed, and " + strength +
				" strength. Along with " + armor +
				" armor, " + dex +
				" dexterity and " + weapon_durability + " weapon durabilty.");
		}

		// The method used for attacking
		public override int Attack()
		{
			randNum = rng.Next(0, strength);
			int attack = (randNum * dex);

			
			weapon_durability--;

			
			if (weapon_durability == 0)
			{
				attack = 3;
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
		
		public override bool HasFled()
		{
			bool flee;
			if (health < 5)
			{
				flee = true;
			}
			else
			{
				flee = false;
			}

			return flee;
		}
		
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
