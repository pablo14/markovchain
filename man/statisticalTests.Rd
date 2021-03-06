% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/5_statisticalTests.R
\name{verifyMarkovProperty}
\alias{verifyMarkovProperty}
\alias{assessOrder}
\alias{assessStationarity}
\alias{verifyEmpiricalToTheoretical}
\alias{verifyHomogeneity}
\title{Various functions to perform statistical inference of DTMC}
\usage{
verifyMarkovProperty(sequence, verbose = TRUE)

assessOrder(sequence, verbose = TRUE)

assessStationarity(sequence, nblocks, verbose = TRUE)

verifyEmpiricalToTheoretical(data, object, verbose = TRUE)

verifyHomogeneity(inputList, verbose = TRUE)
}
\arguments{
\item{sequence}{An empirical sequence.}

\item{verbose}{Should test results be printed out?}

\item{nblocks}{Number of blocks.}

\item{data}{matrix, character or list to be converted in a raw transition matrix}

\item{object}{a markovchain object}

\item{inputList}{A list of items that can coerced to transition matrices}
}
\value{
Verification result

a list with following slots: statistic (the chi - square statistic), dof (degrees of freedom), and corresponding p-value

a list of transition matrices?
}
\description{
These functions verify the Markov property, assess 
             the order and stationarity of the Markov chain.

This function tests whether an empirical transition matrix is statistically compatible
with a theoretical one. It is a chi-square based test

Verifies that the s elements in the input list belongs to the same DTMC
}
\examples{
sequence <- c("a", "b", "a", "a", "a", "a", "b", "a", "b",
              "a", "b", "a", "a", "b", "b", "b", "a")
mcFit <- markovchainFit(data = sequence, byrow = FALSE)
verifyMarkovProperty(sequence)
assessOrder(sequence)
assessStationarity(sequence, 1)


#Example taken from Kullback Kupperman Tests for Contingency Tables and Markov Chains

sequence<-c(0,1,2,2,1,0,0,0,0,0,0,1,2,2,2,1,0,0,1,0,0,0,0,0,0,1,1,
2,0,0,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,2,1,0,
0,2,1,0,0,0,0,0,0,1,1,1,2,2,0,0,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,0,2,
0,1,1,0,0,0,1,2,2,0,0,0,0,0,0,2,2,2,1,1,1,1,0,1,1,1,1,0,0,2,1,1,
0,0,0,0,0,2,2,1,1,1,1,1,2,1,2,0,0,0,1,2,2,2,0,0,0,1,1)

mc=matrix(c(5/8,1/4,1/8,1/4,1/2,1/4,1/4,3/8,3/8),byrow=TRUE, nrow=3)
rownames(mc)<-colnames(mc)<-0:2; theoreticalMc<-as(mc, "markovchain")

verifyEmpiricalToTheoretical(data=sequence,object=theoreticalMc)


data(kullback)
verifyHomogeneity(inputList=kullback,verbose=TRUE)

}
\references{
Anderson and Goodman.
}
\seealso{
\code{markovchain}
}
\author{
Tae Seung Kang, Giorgio Alfredo Spedicato
}
\concept{statisticalTests}
