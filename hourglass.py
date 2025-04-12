# ⏳ The Hourglass of Dreams - Python Version
print("...the dream starts...")
print(" ")
print("You have come to see the Hourglass of Dreams seeking wisdom on how to achieve mastery of a skill.")
print(" ")

# Input goal
dream = input("The Hourglass ask you: 'What skill do you want to master?' \nYou: I want to master the skill of: ")

# Input hours per day and days per week
days = int(input("The living sands ask you for a number: 'How many days per week will you work on this dream?' \nYou: "))
hours = int(input("The final question from the arcane device: 'How many hours per day will you dedicate to it?' \nYou: "))

#This was based on a TedTalk by Josh Kaufman, who said that it takes 20 hours to learn a new skill and become average at it.
#I also noticed that most courses on 3D softwares, game development and programming also has a duration of 20-30 hours.
#Because of that, I decided to use 25 hours as a base for this calculation. 
#Wanna learn something new and get good enough at it? 25 hours is a good number to start with.
#Wanna become pro? 50-100 hours is a good reference.
#Wanna be the best in the world, the ultimate master? Then you use the famous 10,000 hours rule.
#But don't forget that you DON'T NEED 10 thousand hours to be happy with your skill and find a job with it.
weekly_hours = days * hours
total_weeks = 25 / weekly_hours
total_days = total_weeks * 7
total_months = total_weeks / 4.345  # Average weeks per month

# Output results
print(f"The Hourglass of Dreams has calculated your goal through the magic of invisible numbers and intangible seconds. Now you will receive the answer you seek. \nTo become good enough with {dream}, you will need to dedicate:")
print(" ")
print(f"{int(total_days)} days")
print(f"≈ {total_weeks:.1f} weeks") 
print(f"≈ {total_months:.1f} months")
print(" ")
print(f"By the end of this time, you will be good enough at it IF you practice {hours} hours a day for {days} days each week.")
print("You won't become the best in the world, but you will be average at it, which is a good start, above most people, and you won't be a beginner anymore.")
print(" ")
print("Remember: 'The main barrier is not intellectual, it's emotional' - Josh Kaufman")
print(" ")
print("The Hourglass of Dreams wishes you good luck and hard work on your journey to mastery.")
print(" ")
print("End of the dream.")
