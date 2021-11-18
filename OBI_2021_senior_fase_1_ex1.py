## Author's code: Rafael Henrique Nogalha de Lima ###
##                November 2021                   ###

def countAgeThirdSon(m, f1, f2):
  f3 = m - (f1+f2) # Monica's son age 3 calculation
  return f3

def main():
  m = input()   # Monica's age
  f1 = input()  # Monica's son age 1
  f2 = input()  # Monica's son age 2
  f3 = countAgeThirdSon(int(m), int(f1), int(f2))
  f3 = int(f3)
  
  biggestSon = max(int(f1),int(f2),int(f3)) # max of the son's age
  
  print(biggestSon)
  
if __name__ == "__main__":
  main()