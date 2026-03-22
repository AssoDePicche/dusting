<?php

declare(strict_types=1);

final class PrimeFactorsTest extends \PHPUnit\Framework\TestCase
{
  private readonly PrimeFactors $primeFactors;

  public function setUp(): void
  {
    $this->primeFactors = new PrimeFactors;
  }

  public function test_prime_factors_of_one(): void
  {
    $this->assertSame([], $this->primeFactors(1));
  }

  public function test_prime_factors_of_two(): void
  {
    $this->assertSame([2], $this->primeFactors(2));
  }

  public function test_prime_factors_of_three(): void
  {
    $this->assertSame([3], $this->primeFactors(3));
  }

  public function test_prime_factors_of_four(): void
  {
    $this->assertSame([2, 2], $this->primeFactors(4));
  }

  public function test_prime_factors_of_five(): void
  {
    $this->assertSame([5], $this->primeFactors(5));
  }

  public function test_prime_factors_of_six(): void
  {
    $this->assertSame([2, 3], $this->primeFactors(6));
  }

  public function test_prime_factors_of_seven(): void
  {
    $this->assertSame([7], $this->primeFactors(7));
  }

  public function test_prime_factors_of_nine(): void
  {
    $this->assertSame([3, 3], $this->primeFactors(9));
  }

  public function test_prime_factors_of_eighteen(): void
  {
    $this->assertSame([2, 3, 3], $this->primeFactors(18));
  }

  public function test_prime_factors_of_twenty_five(): void
  {
    $this->assertSame([5, 5], $this->primeFactors(25));
  }

  public function test_prime_factors_of_sixty_four(): void
  {
    $this->assertSame([2, 2, 2, 2, 2, 2], $this->primeFactors(64));
  }

  public function test_prime_factors_of_seventy_four(): void
  {
    $this->assertSame([2, 37], $this->primeFactors(74));
  }

  private function primeFactors(int $n): array
  {
    return $this->primeFactors->of($n);
  }
}
