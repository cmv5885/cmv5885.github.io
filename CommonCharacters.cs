using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Characters
{
	class CommonCharacter
	{
        //Fields 
        protected string name;
        protected int health;
		protected Random rng = new Random();
		protected int randNum;
		protected int speed;
		protected int strength;
		protected int armor;

		//Constructors 
		//Defaultconstructor
		public CommonCharacter()
		{
            name = "Bob";
            health = 100;
            speed = 2;
            strength = 1;
            armor = 0;


		}

		//Parameterized 
		public CommonCharacter(string name, int health, int randNum, int speed, int strength, int armor)
		{
            this.name = name;
            this.health = health;
			this.randNum = randNum;
			this.speed = speed;
			this.strength = strength;
			this.armor = armor;
		}

        //Properties 
        public string Name { get{  return name; } }
        public int Health { get { return health; } }
		public int RandNum { get { return randNum; } }
		public int Speed { get { return speed; } }
		public int Strength { get { return strength; } }
		public int Armor { get { return armor; } }

		// Print the name
		public virtual string Print()
		{
			Console.WriteLine(name);
			return name;
		}

		//This method to print the health
		public virtual string Print_health()
		{
			Console.WriteLine(name + " has " + health + " health left");
			return name;
		}

		//Method to calculate attack 
		public virtual int Attack()
        {
            randNum = rng.Next(1, 6);
            int attack = randNum ;


            return attack;
        }
        //method to calculate damage
        public virtual void TakeDamage(int damage)
        {

                health = health - damage;
                if (health < 0)
                {
                    health = 0;
                }
        

            Console.WriteLine(name + " has taken " + damage + " damage");
        }
        //Method to tell if fled
        public virtual bool HasFled()
        {
            bool flee;
            if (health < 50)
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
        public virtual bool IsDead()
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
