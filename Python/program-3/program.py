/* Physics Questions using Python*/

//
train_mass = 22680
train_acceleration = 10
train_distance = 100

bomb_mass = 1
#define c
c = 3*10**8

#function1
def f_to_c(f_temp):
  c_temp = (f_temp - 32) * 5/9
  return c_temp

f100_in_celsius = f_to_c(100)

#function 2
def c_to_f(c_temp):
  f_temp = c_temp * (9/5) + 32
  return f_temp

c0_in_fahrenheit = c_to_f(0)

#use the force function
def get_force(mass,acceleration):
  return mass*acceleration

train_force = get_force(train_mass,train_acceleration)

print(train_force)

#another one
print("The GE train supplies " + str(train_force) + " Newtons of force.")

#4th function

def get_energy(mass):
  return mass*(c**2)

#testing get_energy
bomb_energy = get_energy(bomb_mass)

print("A 1kg bomb supplies " +  str(bomb_energy) +  " Joules.")

#defining 5th function
def get_work(mass,acceleration,distance):
  force = get_force(mass,acceleration)
  return force * distance

train_work = get_work(train_mass,train_acceleration,train_distance)

#printing
print("The GE train does " +  str(train_work) + " Joules of work over " + str(train_distance) + " meters.")

  
