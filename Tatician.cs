using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Characters
{
	class Tatician : CommonCharacter
	{
		//Fields 
		private int intelligence;
		

		//Properties 
		
		public int Intelligence { get { return intelligence; } }

		//Default Constructor
		public Tatician()
		{
			name = "Mavis";
			health = 65;
			speed = 8;
			strength = 4;
			armor = 13;
			intelligence = 8;
		}

		// Parameterized Constructor
		public Tatician(string name, int health, int speed, int strength, int armor, int intelligence)
		{
			this.name = name;
			this.health = health;
			this.randNum = rng.Next();
			this.speed = speed;
			this.strength = strength;
			this.armor = armor;
			this.intelligence = intelligence;
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
			return (name + " the Tatician has " + health + " health, " + speed +
				" speed, and " + strength +
				" strength. Along with " + armor +
				" armor and " + intelligence +
				" intelligence. ");
		}

		// The method used for attacking
		public override int Attack()
		{
			randNum = rng.Next(0, strength);
			int attack = (randNum * intelligence);

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
			if (health < 10)
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
