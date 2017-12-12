using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Characters
{
	class Mage : CommonCharacter
	{
		//Fields 
		private int magic;
		private int potion;

		//Properties 
		public int Magic { get { return magic; } }
		public int Potion { get { return potion; } }

		//Default Constructor
		public Mage()
		{
			name = "Micaiah";
			health = 50;
			speed = 7;
			strength = 3;
			armor = 10;
			magic = 9;
			potion = 5;
		}

		// Parameterized Constructor
		public Mage(string name, int health, int speed, int strength, int armor, int magic, int potion)
		{
			this.name = name;
			this.health = health;
			this.randNum = rng.Next();
			this.speed = speed;
			this.strength = strength;
			this.armor = armor;
			this.magic = magic;
			this.potion = potion;
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
			return (name + " the Mage has " + health + " health, " + speed +
				" speed, and " + strength +
				" strength. Along with " + armor +
				" armor, " + magic +
				" magic and " + potion + " potions.");
		}

		// The method used for attacking
		public override int Attack()
		{
			randNum = rng.Next(0, strength);
			int attack = (randNum * magic);

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
				Console.Write(name + " has taken " + damage + " damage from ");
			}
			else if (damage >= 0 && damage <= armor)
			{
				damage = armor - damage;
				health = health - damage;
				if (health < 0)
				{
					health = 0;
				}

				Console.Write(name + " has taken " + damage + " damage from ");
			}
			else if (damage > armor)
			{
				damage = damage - armor;
				health = health - damage;
				if (health < 0)
				{
					health = 0;
				}

				Console.Write(name + " has taken " + damage + " damage from ");
			}

			else if (health < 25)
			{
				potion--;
				health = health + 10;
				Console.WriteLine(name + " gained 10 health and lost a potion");
			}

			
		}
		
		public override bool HasFled()
		{
			bool flee;
			if (health == 15)
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
