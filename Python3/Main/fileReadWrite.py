with open("input.txt", mode="r") as fs:
  words = list() # words = []
  for line in fs.readlines():
    #print(line,end="")
  # for line in fs:
  #   print(line,end="")
    words += line.strip().split()
  #print(words)
  unique_words = set(words)
  #print("Unique Words: ")
  #print(unique_words)

  with open("output.txt", mode="w") as fw:
    for item in sorted(unique_words):
      fw.write(item)
      fw.write("\n")
  #print("End!")