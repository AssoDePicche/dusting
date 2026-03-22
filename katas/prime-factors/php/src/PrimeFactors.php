<?php

declare(strict_types=1);

final class PrimeFactors
{
    public function of(int $n): array
    {
        $primeFactors = [];

        $factor = 2;

        while ($n !== 1) {
            $divisible = ($n % $factor) === 0;

            if ($divisible) {
                $n /= $factor;

                array_push($primeFactors, $factor);

                continue;
            }

            $factor++;
        }

      return $primeFactors;
    }
}
