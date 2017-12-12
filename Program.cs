using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Characters
{
	class Program
	{

		static void Main(string[] args)
		{
            List<CommonCharacter> battlers = new List<CommonCharacter>();
            Random RNG = new Random();
			Rouge r1 = null;
			Archer a1 = null;
			Warrior w1 = null; 
			Mage m1 = null;
			Tatician t1 = null;
			Fighter f1 = null; 

			Console.WriteLine("Welcome to the Arena! How many players are there? Only up to four can play");

			bool start = false;
			int players;
			players = int.Parse(Console.ReadLine());
			while (start == false)
			{
				if (players <= 0 || players > 4)
				{
					Console.WriteLine("Invalid player entry please enter again");
					players = int.Parse(Console.ReadLine());
				}
				else
				{
					break;
				}
			}

			int c = 1;

			for (int i = 0; i < players; i++)
			{
				
				Console.WriteLine("Player " + c + " choose your battler. The Rouge, Archer, Warrior, Mage, Tatitican, or Fighter. " +
					"Once one is chosen no one else can pick them");
				bool choose = false;
				while (choose == false)
				{
					string choice = Console.ReadLine();
					choice = choice.ToLower().Trim();

					if (choice == "rouge" && r1 == null)
					{
						r1 = new Rouge();
						battlers.Add(r1);
						c++;
						break;
					}
					else if (choice == "archer" && a1 == null)
					{
						a1 = new Archer();
						battlers.Add(a1);
						c++;
						break;
					}
					else if (choice == "warrior" && w1 == null)
					{
						w1 = new Warrior();
						battlers.Add(w1);
						c++;
						break;
					}
					else if (choice == "mage" && m1 == null)
					{
						m1 = new Mage();
						battlers.Add(m1);
						c++;
						break;
					}
					else if (choice == "tatitican" && t1 == null)
					{
						t1 = new Tatician();
						battlers.Add(t1);
						c++;
						break;
					}
					else if (choice == "fighter" && f1 == null)
					{
						f1 = new Fighter();
						battlers.Add(f1);
						c++;
						break;
					}
					else
					{
						Console.WriteLine("Already taken please enter again");
					}
				}
			}
			
			// Display their stats
			for (int i = 0; i < battlers.Count(); i++ )
			{
				Console.WriteLine(battlers[i].ToString());
				Console.WriteLine();
			}

            int rounds = 0;
			bool winner = false;
			

			while (winner == false)
			{
				Console.WriteLine();
				//Battle
				rounds++;
				int z = 1;
				Console.WriteLine("Round " + rounds);
				

				Console.WriteLine();

				for (int i = 0; i < battlers.Count(); i ++)
				{
					Console.WriteLine("Player " + z + " which player would you like to attack?");
					int attack = int.Parse(Console.ReadLine());

					if (attack == 1)
					{
						battlers[0].TakeDamage(battlers[i].Attack());
						Console.WriteLine(battlers[i].Print());
					}

					else if (attack == 2)
					{
						battlers[1].TakeDamage(battlers[i].Attack());
						Console.WriteLine(battlers[i].Print());
					}

					else if (attack == 3)
					{
						battlers[2].TakeDamage(battlers[i].Attack());
						Console.WriteLine(battlers[i].Print());
					}
					else if (attack == 4)
					{
						battlers[3].TakeDamage(battlers[i].Attack());
						Console.WriteLine(battlers[i].Print());
					}

					for (int j = 0; j < battlers.Count(); j++)
					{
						if (battlers[j].HasFled() == true)
						{

							Console.WriteLine(battlers[j].Print() + " has fled");
							battlers.Remove(battlers[j]);
						}

						if (battlers[j].IsDead() == true)
						{

							Console.WriteLine(battlers[j].Print() + " has died");
							battlers.Remove(battlers[j]);
						}
					}
					Console.WriteLine();
					for (int p = 0; p < battlers.Count; p++)
					{
						battlers[p].Print_health();
					}
					z++;
				}

				if (battlers.Count < 2)
				{
					Console.WriteLine("The battle is over");
					winner = true;
					break;
				}

				
			}

			if (battlers.Count == 1)
			{
				Console.WriteLine(battlers[0].Print() + " is the last one standing");
			}

			else
			{
				Console.WriteLine("Everyone has died or fled");
			}
		}
	}
}
