-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 06, 2023 at 01:08 PM
-- Server version: 10.4.25-MariaDB
-- PHP Version: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `vasu`
--

-- --------------------------------------------------------

--
-- Table structure for table `charcter`
--

CREATE TABLE `charcter` (
  `First_name` varchar(30) DEFAULT NULL,
  `Last_name` varchar(30) DEFAULT NULL,
  `Address` varchar(70) DEFAULT NULL,
  `Ciy` varchar(20) DEFAULT NULL,
  `Age` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `charcter`
--

INSERT INTO `charcter` (`First_name`, `Last_name`, `Address`, `Ciy`, `Age`) VALUES
('Mickey', 'Mouse', '123 Fantasy Way', 'Anaheim', 73),
('Bat', 'Man', '321 Cavern Ave', 'Gotham', 54),
('Wonder', 'Woman', '987 Truth Way', 'Paradise', 39),
('Donald', 'Duck', '555 Quack Street', 'Mallard', 65),
('Bugs', 'Bunny', '567 Carrot Street', 'Rascal', 58),
('Wiley', 'Coyote', '999 Acme Way', 'Canyon', 61),
('Cat', 'Woman', '234 Purrfect Street', 'Hairball', 32),
('Tweety', 'Bird', '543', 'Itotitaw', 28);

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `Employee_id` int(11) NOT NULL,
  `First_name` varchar(30) DEFAULT NULL,
  `Last_name` varchar(30) DEFAULT NULL,
  `Salary` int(11) DEFAULT NULL,
  `Joining_date` varchar(70) DEFAULT NULL,
  `Department` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`Employee_id`, `First_name`, `Last_name`, `Salary`, `Joining_date`, `Department`) VALUES
(1, 'John', 'Abraham', 1000000, '01-JAN-13 12.00.00 AM', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '01-JAN-13 12.00.00 AM', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '01-FEB-13 12.00.00 AM', 'Banking'),
(4, 'Tom', 'Jose', 600000, '01-FEB-13 12.00.00 AM', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '01-FEB-13 12.00.00 AM', 'Insurance'),
(6, 'Philip', 'Mathew', 750000, '01-JAN-13 12.00.00 AM', 'Services'),
(7, 'TestNamel', '123', 650000, '01-JAN-13 12.00.00 AM', 'Services'),
(8, 'TestName2', 'Lname%', 600000, '01-FEB-13 12.00.00 AM', 'Insurance');

-- --------------------------------------------------------

--
-- Table structure for table `exam`
--

CREATE TABLE `exam` (
  `Rollno` int(11) DEFAULT NULL,
  `S_code` varchar(20) DEFAULT NULL,
  `Marks` int(11) DEFAULT NULL,
  `P_code` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `exam`
--

INSERT INTO `exam` (`Rollno`, `S_code`, `Marks`, `P_code`) VALUES
(1, 'CS11', 50, 'CS'),
(1, 'CS12', 60, 'CS'),
(2, 'EC101', 66, 'EC'),
(2, 'EC102', 70, 'EC'),
(3, 'EC101', 45, 'EC'),
(3, 'EC102', 50, 'EC');

-- --------------------------------------------------------

--
-- Table structure for table `incentive`
--

CREATE TABLE `incentive` (
  `Employee_ref_id` int(11) DEFAULT NULL,
  `Incentive_date` varchar(30) DEFAULT NULL,
  `Incentive_amount` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`Employee_ref_id`, `Incentive_date`, `Incentive_amount`) VALUES
(1, '01-FEB-13', 5000),
(2, '01-FEB-13', 3000),
(3, '01-FEB-13', 4000),
(1, '01-JAN-13', 4500),
(2, '01-JAN-13', 3500);

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `Rollno` int(11) NOT NULL,
  `Name` varchar(50) DEFAULT NULL,
  `Branch` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`Rollno`, `Name`, `Branch`) VALUES
(1, 'Jay', 'Computer Science'),
(2, 'suhani', 'Electronic and com'),
(3, 'kriti', 'Electronic and com');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`Employee_id`);

--
-- Indexes for table `exam`
--
ALTER TABLE `exam`
  ADD KEY `Rollno` (`Rollno`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`Rollno`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `exam`
--
ALTER TABLE `exam`
  ADD CONSTRAINT `exam_ibfk_1` FOREIGN KEY (`Rollno`) REFERENCES `student` (`Rollno`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
