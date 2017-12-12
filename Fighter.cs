using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Characters
{
	class Fighter : CommonCharacter
	{
		//Fields 
		private int combo_skill;

		//Properties 
		public int Combo_skill { get { return combo_skill; } }

		//Default Constructor
		public Fighter()
		{
			name = "Winston";
			health = 90;
			speed = 9;
			strength = 11;
			armor = 15;
			combo_skill = 7;
		}

		// Parameterized Constructor
		public Fighter(string name, int health, int speed, int strength, int armor, int combo_skill)
		{
			this.name = name;
			this.health = health;
			this.randNum = rng.Next();
			this.speed = speed;
			this.strength = strength;
			this.armor = armor;
			this.combo_skill = combo_skill;
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
			return (name + " the Fighter has " + health + " health, " + speed +
				" speed, and " + strength +
				" strength. Along with " + armor +
				" armor and " + combo_skill +
				" combo skill");
		}

		// The method used for attacking
		public override int Attack()
		{
			randNum = rng.Next(0, strength);
			int attack = (randNum * combo_skill);

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
