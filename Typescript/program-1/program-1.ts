export function fibonacci(index: number): number {
  if (index === 0 || index === 1) {
    return index
  } else if (index >= 2) {
    return fibonacci(index - 1) + fibonacci(index - 2)
  } else {
    throw new Error('parameter invalid')
  }
}
