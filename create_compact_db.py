# This file expects lines in the format of "<position> <move> <count>"
# to be piped through it.
# The lines must be ordered by position to make binary searches possible.
# For each line it writes 6 Bytes to stdout
# (5 for the position and one for the move count).

import fileinput
import sys

# Encodes a position in a more compact way
def encode_compact_position(position):
  return \
    (position[0] * 6103515625) + \
    (position[1] * 244140625) + \
    (position[2] * 9765625) + \
    (position[3] * 390625) + \
    (position[4] * 15625) + \
    (position[5] * 625) + \
    (position[6] * 25) + \
    (position[7])

# Decodes 40 bit back to 8 numbers
def decode_position(key):
  return (
    int(key >> 35 & 31),
    int(key >> 30 & 31),
    int(key >> 25 & 31),
    int(key >> 20 & 31),
    int(key >> 15 & 31),
    int(key >> 10 & 31),
    int(key >>  5 & 31),
    int(key       & 31),
  )

for line in fileinput.input():
  (position, move, count) = line.rstrip().split(' ')
  #print "got: (%s, %s)" % (position, count)

  # If we dont use this more compact way of storing the position,
  # we hit the 40th bit and get sign problems
  position = encode_compact_position( decode_position( long(position) ) )
  #print "compacted to %s" % position

  sys.stdout.write( chr( position >> 32        ) )
  sys.stdout.write( chr( position >> 24 & 0xFF ) )
  sys.stdout.write( chr( position >> 16 & 0xFF ) )
  sys.stdout.write( chr( position >>  8 & 0xFF ) )
  sys.stdout.write( chr( position       & 0xFF ) )
  sys.stdout.write( chr( int(count)            ) )
