inputFile = open('input.txt', 'r')
outputFile = open('output.txt', 'a')



testCase = int(inputFile.readline())
i=1

while testCase>0 :
    n = int(inputFile.readline())
    v=[0,0,0]
    while n>0 :
        houseData = inputFile.readline().split(',')

        totalBedroom = int(houseData[0])
        r =int(houseData[1])
        s=int (houseData[2])
        h= int (houseData[3])

        hWalls = h *  6               
        rWalls = r * 3
        bedRoom = totalBedroom - r
        bedRoomWalls = bedRoom * 4
        standardRoom = (s - bedRoom) * 4
        totalWalls = hWalls + rWalls + bedRoomWalls + standardRoom

        accent = totalWalls / 3.0
        normal = (totalWalls * 2) / 3.0

        totalHour = (accent * 2.5) + (normal * 3.25)
        accentQuality = (accent * 1.5)
        normalQuality = (normal * 2.25)

        v[0] = v[0] + totalHour
        v[1] = v[1] + accentQuality
        v[2] = v[2] + normalQuality
    
        n=n-1
    outputFile.write(
    f'Case#{i}: {"{:.2f}".format(v[0])}, {"{:.2f}".format(v[1])}, {"{:.2f}".format(v[2])}\n')
    i=i+1

    testCase=testCase-1
outputFile.close()
inputFile.close()
   